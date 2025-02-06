#include <iostream>
using namespace std;

class Animal{
public:
    Animal() {
        this-> race = "None";
        this-> name = "None";
        this-> age = 0;

    }

    Animal(string race, string name, int age) {
        this-> race = race;
        this-> name = name;
        this-> age = age;
    }

protected:
    string race;
    string name;
    int age;
};

class Dog : public Animal {
    using Animal::Animal;
    
    public:
        void bark() {
            cout << "woof woof!";
        }

};

int main() {
    Dog rex;

    rex.bark();

}