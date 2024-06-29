#include "Dog.h"
#include "Cat.h"

int main() {
    Dog dog("Buddy", 3);
    Cat cat("Whiskers", 2);

    dog.makeSound();
    cat.makeSound();

    return 0;
}
