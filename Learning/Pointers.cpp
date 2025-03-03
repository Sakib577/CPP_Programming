#include <iostream>
using namespace std;

void test(string Food[]);

int main(){
    // pointer = is a variable that stores the memory adress of another adress
    //           Sometimes it's just eaiser to work with the memory adress

    // &  adress of operator
    // *  dereference operator

    int num = 10;
    int *pNum = &num;

    string food[] = {
        "Pizza",
        "Burger",
        "Pasta",
        "Fries"
    };
    string *pFood = food; // array is already a pointer

    cout << "Value of num: " << num << endl;
    cout << "Memory adress of num: " << pNum << endl;
    cout << "Value of the adress pNum " << *pNum << endl;

    cout << "Value of food at index 0: " << food[0] << endl;
    cout << "Memory adress of food: " << pFood << endl;
    cout << "Value of the adress pFood " << *pFood << endl;

    test(food);
    cout << food[0] << endl;

    return 0;
}

void test(string Food[]){
    Food[0]= "Sakib";
}