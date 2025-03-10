#include <iostream>
using namespace std;

class Human{
    // without any access modifier in a class, it defaults to private
    public:
    string name;
    string occupation = "Programmar"; // it is default
    int age;

    void eat(){
        cout << "This person is eating." << endl;
    }

    void drink(){
        cout << "This person is drinking." << endl;
    }

    void sleep (){
        cout << "This person is sleeping." << endl;
    }
};  // semicolon is a must

int main(){
            // object = A collection of attributes and methods
            //          They can have characteristics and could peform actions
            //          Can be used to mimic real world items (ex. Phone, Book etc)
            //          Created from a class which acts as a "blue-print"
    
    Human human1;   // human1 is an object

    human1.name = "Sohan";
    human1.occupation = "Student";
    human1.age = 22;

    cout << "Name: " << human1.name << endl;
    cout << "Age: " << human1.age << endl;
    cout << "Occupation: " << human1.occupation << endl;

    // Until here everything just seems like struct
    // but classes have many more implementations... like it can does works(methods to be exact...)

    human1.sleep();
    human1.eat();
    human1.drink();

    cout << endl;
    Human human2;
    human2.name = "Sadik";

    cout << "Name: " << human2.name << endl;
    cout << "Occuapation: " << human2.occupation << endl; // here the default value gets printed
    return 0;
}