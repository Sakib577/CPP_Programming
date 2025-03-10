#include <iostream>
using namespace std;

class Animal{
    public:
        bool alive= true;
    void eat(){
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal{
    public:
    void eat(){
        cout << "Dog is eating." << endl;
    }
};

int main(){
    Animal animal;
    cout << "Animal class object: " << animal.alive << endl;
    animal.eat();

    Dog dog;
    cout << "Dog class object: " << dog.alive << endl; // this is inherited from Animal.
    dog.eat();

    return 0;
}