#include <iostream>
using namespace std;

// void printCar(Car cars); 
// this function decalration is wrong before we declared it even before Struct car is declared
struct Car
{
    string model;
    int year;
    string color;
};

void paintCar(Car &cars, string color);

void printCar(Car &cars);

int main(){

    Car car1;
    Car car2;

    car1.model ="Mustang";
    car1.year = 2023;
    car1.color = "Blue";

    car2.model = "Honda";
    car2.year= 2002;
    car2.color = "Gray";

    cout << "Outide the printcar method" <<  &car1 << endl;
    printCar(car1);     // they pass by value by default
    cout << "Outide the printcar method" << &car2 << endl;
    printCar(car2);

    paintCar(car1, "Silver");
    printCar(car1);

    return 0;
}

void printCar(Car &cars)    // Now it'll pass by reference
{  
    cout << "Inside the printcar method" <<  &cars << endl;
    cout << cars.model << endl;
    cout << cars.year << endl;
    cout << cars.color << endl;
}

void paintCar(Car &cars, string color)
{
    cars.color= color;
}