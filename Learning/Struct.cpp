// struct = A structure that group related variables under one name
//          structs can contain many different data types (string, int etc..)
//          variables in a struct are known as 'members"
//          members can be access with . "Class Member Access Operator"

#include <iostream>
using namespace std;

struct Student
{
    // without an access modifier in a struct, it defaults to public
    string name;
    double gpa;
    bool enrolled;
};


int main(){
    Student Student1;
    Student1.name = "Sadik";
    Student1.gpa = 3.65;
    Student1.enrolled = true;

    cout << Student1.name << endl;
    cout << Student1.gpa << endl;
    cout << Student1.enrolled << endl;

    Student Student2;
    Student2.name = "Sazid";
    Student2.gpa = 3.15;
    Student2.enrolled = true;

    cout << Student2.name << endl;
    cout << Student2.gpa << endl;
    cout << Student2.enrolled << endl;
    return 0;
}  