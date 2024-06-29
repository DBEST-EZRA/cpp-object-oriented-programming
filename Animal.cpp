#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& name, int age) : name(name), age(age) {}

void Animal::setName(const std::string& name) {
    this->name = name;
}

std::string Animal::getName() const {
    return name;
}

void Animal::setAge(int age) {
    this->age = age;
}

int Animal::getAge() const {
    return age;
}

void Animal::makeSound() const {
    std::cout << name << " makes a sound." << std::endl;
}
