#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age);

    void setName(const std::string& name);
    std::string getName() const;

    void setAge(int age);
    int getAge() const;

    virtual void makeSound() const;
};

#endif // ANIMAL_H
