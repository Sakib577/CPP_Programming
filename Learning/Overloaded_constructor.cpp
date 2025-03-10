#include <iostream>
using namespace std;

class Pizza{
    public:
        string topping1, topping2;
    
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1,string topping2){
        this->topping1= topping1;
        this->topping2= topping2;
    }
    Pizza(){

    }
};

int main(){
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Cheese");
    Pizza pizza3; // if we don't pass value, we don't need to write curly braces

    cout << "Toppings: " << pizza1.topping1 << pizza1.topping2 << endl;
    cout << "Toppings: " << pizza2.topping1 << pizza2.topping2 << endl;
    cout << "Toppings: " << pizza3.topping1 << pizza3.topping2 << endl;
    return 0;
}