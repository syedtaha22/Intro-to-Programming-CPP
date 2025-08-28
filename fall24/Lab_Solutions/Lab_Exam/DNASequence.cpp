/*
    Task 2:
        You are given a string that represents a DNA sequence (e.g., "ATCGGCTA"). Write a program to:
            1.  Count the frequency of each nucleotide (A, T, C, G).
            2.  Reverse the DNA sequence using recursion.
            3.  Check if the DNA sequence is a palindrome (the same forwards and backwards).
            4.  Display the results.

        Example Input:

            Enter a DNA sequence: ATCGGCTA

        Example Output:
            Frequency:
            A: 2
            T: 2
            C: 2
            G: 2
            Reversed Sequence: ATCGGCTA
            Palindrome: Yes

        Submission: DNASequence.cpp
*/

// Include the necessary libraries
#include <iostream>
#include <string>

// Function to count the frequency of each nucleotide
int* countNucleotides(std::string sequence) {
    // Initialize an array to store the frequency of each nucleotide
    int* frequency = new int[4] {0, 0, 0, 0}; // A, T, C, G

    // For each character in the DNA sequence
    for (char nucleotide : sequence) {
        // Increment the frequency based on the nucleotide
        switch (nucleotide) {
        case 'A': frequency[0]++; break;
        case 'T': frequency[1]++; break;
        case 'C': frequency[2]++; break;
        case 'G': frequency[3]++; break;
        }
    }

    // Return a pointer to the frequency array
    return frequency;
}

// Function to reverse the DNA sequence using recursion
std::string reverseSequence(std::string sequence, int start, int end) {
    // Base case: if the start index is greater than or equal to the end index
    if (start >= end) return sequence;

    // Swap the characters at the start and end indices
    std::swap(sequence[start], sequence[end]);

    // Recursively call the function with the updated indices
    return reverseSequence(sequence, start + 1, end - 1);
}

// Wrapper function to reverse the DNA sequence
std::string reverseSequence(std::string sequence) {
    return reverseSequence(sequence, 0, sequence.length() - 1);
}

// Function to check if the DNA sequence is a palindrome
bool isPalindrome(std::string sequence) {
    // Check if the sequence is equal to its reverse
    return sequence == reverseSequence(sequence);
}

int main() {
    std::string sequence;
    std::cout << "Enter a DNA sequence: ";
    std::cin >> sequence;

    // Count the frequency of each nucleotide
    int* frequency = countNucleotides(sequence);

    // Display the frequency of each nucleotide
    std::cout << "Frequency:" << std::endl;
    std::cout << "A: " << frequency[0] << std::endl;
    std::cout << "T: " << frequency[1] << std::endl;
    std::cout << "C: " << frequency[2] << std::endl;
    std::cout << "G: " << frequency[3] << std::endl;

    // Reverse the DNA sequence
    std::string reversedSequence = reverseSequence(sequence);
    std::cout << "Reversed Sequence: " << reversedSequence << std::endl;

    // Check if the DNA sequence is a palindrome
    std::cout << "Palindrome: " << (isPalindrome(sequence) ? "Yes" : "No") << std::endl;

    // Free the memory allocated for the frequency array
    delete[] frequency;

    return 0;
}