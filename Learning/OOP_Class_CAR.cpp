#include <iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "You stepped on the accelerator." << endl;
        }

        void brake(){
            cout << "You stepped on the break." << endl;
        }
};

int main(){
    Car car1;
    car1.brand = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Gray";

    cout << car1.brand << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;

    car1.accelerate();
    car1.brake();

    return 0;
}