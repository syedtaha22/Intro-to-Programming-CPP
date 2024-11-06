#include <iostream>

// Function that classifies a number as negative, zero, or positive
std::string classifyNumber(int num) {
    if (num < 0) {
        return "Negative";
    }
    else if (num == 0) {
        return "Zero";
    }
    return "Positive";
}

int main() {
    int number = -5;
    std::cout << "The number " << number << " is " << classifyNumber(number) << "." << std::endl;
    return 0;
}
