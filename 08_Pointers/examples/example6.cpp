#include <iostream>

void createLeak() {
    /*
        The memory allocated for the integer is not
        deallocated and the only reference to it is
        lost, when the function ends.

        i.e ptr goes out of scope
    */
    int* ptr = new int(10); // Allocate memory
}

void NoLeak() {
    /*
        This time, we properly deallocate the memory
        allocated for the integer before the function ends

        So, there is no memory leak
    */
    int* ptr = new int(10);
    std::cout << "Value: " << *ptr << '\n';
    delete ptr; // Properly deallocate memory

}

int main() {
    createLeak(); // Causes a leak
    NoLeak(); // No leak
    return 0; // Exit
}
