#include <iostream>
#include <vector>

int main() {
    // Create a vector of vectors (2D vector)
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6, 7, 8, 9},
        {10, 11, 12,13, 14},
        {15, 16}
    };

    // Accessing and printing elements from the 2D vector
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
