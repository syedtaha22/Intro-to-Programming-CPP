#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    // Creating an instance of Person
    Person person1;
    person1.name = "John";
    person1.age = 25;

    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;

    return 0;
}
