#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& name, int age) : Animal(name, age) {}

void Dog::makeSound() const {
    std::cout << name << " barks." << std::endl;
}
