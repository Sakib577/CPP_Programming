#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
    
    // constructor = special method that is automatically called when an object is instantiated
    // useful for assigning values to attributes as arguments

    Car(string brand, string model, int year){ // it has the same name as the class
        this-> brand = brand; // this-> removes ambiguity
        this-> model = model;
        this-> year = year;
    }
};

int main (){
    Car car1("Ford", "Mustang", 2023);
    cout << car1.brand << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;

    Car car2("Honda", "Civic", 2008);
    cout << car2.brand << endl;
    cout << car2.model << endl;
    cout << car2.year << endl;
    
    return 0;
}