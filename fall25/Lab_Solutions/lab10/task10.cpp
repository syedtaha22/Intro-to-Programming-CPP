/*********************************************************************************************
 * @file    task10.cpp
 *
 * @brief   You have been working on a small side project with a close friend who enjoys
 *          leaving coding puzzles. One day, he sends you a mysterious message encoded as
 *          four integers:
 *              1819043144, 1461726319, 1684828783, 33
 *          He tells you that the message contains a hidden meaning but gives no further
 *          instructions. The integers appear random, but you notice that each byte of an
 *          integer may correspond to a single character, which could reveal the original
 *          message.
 *
 * @details Your task is to uncover the hidden message and display it. Think carefully about
 *          how the integers might be structured and how to reconstruct the individual char-
 *          -acters.
 *
 *
 *          Hint: Recall casting and how different types can be used to interpret the same
 *          memory in multiple ways.
 ********************************************************************************************/
#include <iostream>
#include <string>

 /**
  * @brief Encodes a string message into an array of integers.
  *
  * @param message The input string message to encode.
  * @param encoded A reference to a pointer that will point to the
  * allocated array of integers. Must be freed by the caller.
  *
  * @return The number of integers in the encoded array.
  */
int encode(const std::string& message, int*& encoded) {
    // Calculate number of integers needed
    int size_of_int = sizeof(int);
    int size_of_message = message.size();
    int num_ints = (size_of_message + size_of_int - 1) / size_of_int; // ceiling division

    encoded = new int[num_ints](); // initialize to zero

    // Get a char* pointer to the start of the encoded integer array
    char* start = (char*)encoded;
    char* end = start + size_of_message; // Since total bytes = sizeof(char) * size_of_message = 1 * size_of_message

    for (const char c : message) *(start++) = c;

    return num_ints;
}

/**
 * @brief Decodes an array of integers back into a string message.
 *
 * @param encoded The input array of integers to decode.
 * @param length The number of integers in the encoded array.
 *
 * @return The decoded string message.
 */
std::string decode(const int* encoded, int length) {
    std::string message;

    // Calculate total number of bytes
    int bytes = length * sizeof(int);

    // Get a char* pointer to the start of the encoded integer array
    const char* start = (char*)encoded;
    const char* end = start + bytes;

    while (start < end) {
        char ch = *(start++);
        if (ch == '\0') break; // Stop at null terminator
        message += ch;
    }

    return message;
}

int main() {
    // std::string str = "Hello, World!";

    // // Encode string to vector of ints
    // int* encoded = nullptr;
    // int length = encode(str, encoded);

    // std::cout << "Encoded integer array:\n";
    // for (int i = 0; i < length; ++i) {
    //     // normal and in hex
    //     std::cout << encoded[i] << " (0x" << std::hex << encoded[i] << std::dec << ")\n";
    // }
    // std::cout << std::endl;

    int encoded[] = { 1819043144, 1461726319, 1684828783, 33 };
    int length = sizeof(encoded) / sizeof(encoded[0]);

    // Decode back to string
    std::string decoded = decode(encoded, length);
    std::cout << "Decoded message: " << decoded << std::endl;

    // Important!! Free allocated memory
    // delete[] encoded;

    return 0;
}
