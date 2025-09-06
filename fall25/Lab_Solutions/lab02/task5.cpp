/*****************************************************************************************
 * @file    task5.cpp
 *
 * @brief   In cryptography, one of the simplest ways to hide information is by combining
 *          it with a secret key using binary operations. Each character is stored as a
 *          number internally, so you can manipulate its bits to encode or decode it. A
 *          useful property of some operations is that applying the same operation twice
 *          with the same key restores the original value. This is the principle behind
 *          many simple encryption schemes.
 *
 * @details Write a C++ program that:
 *             - Prompts the user to enter a single character as the secret.
 *             - Prompts the user to enter a single character as the key.
 *             - Applies the key to the secret to produce an encrypted character and prints
 *               it.
 *          Then, prompt the user to enter a key for decryption.
 *             - If applying this key to the encrypted character reproduces the original
 *               secret, print the original secret.
 *             - Otherwise, print “Key error”.
 *
 *          Think about what binary operation could allow you to encode and decode with the
 *          same key. There can be multiple ways to achieve this.
 *****************************************************************************************/

#include <iostream>

int main() {
    char secret, key, encryptedChar, decryptKey;

    // Prompt user for the secret character
    std::cout << "Secret: ";
    std::cin >> secret;

    // Prompt user for the key character
    std::cout << "Key: ";
    std::cin >> key;

    // Encrypt the secret using XOR operation with the key
    encryptedChar = (secret ^ key) + ' '; // Adding ' ' to ensure printable character
    std::cout << "\nEncrypted character: " << encryptedChar << std::endl;

    // Prompt user for the decryption key
    std::cout << "\nEnter key: ";
    std::cin >> decryptKey;

    // Decrypt the character using XOR operation with the decryption key
    char decryptedChar = (encryptedChar - ' ') ^ decryptKey; // Subtracting ' ' to reverse the earlier addition
    bool isCorrect = (decryptedChar == secret);

    // Display the result
    std::cout << (!isCorrect ? "Key error" : "Decrypted character: ");
    std::cout << (!isCorrect ? ' ' : decryptedChar) << std::endl;

    return 0;
}