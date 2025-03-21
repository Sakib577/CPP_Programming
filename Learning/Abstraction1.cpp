#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0; 
    // by doing this we can make it obligatory (which means
    // any classes that uses AbstractEmployee, needs to implement this method)
    // a class that cannot be instantiated directly, 
    // serving as a blueprint for other classes (subclasses) to inherit from

};

class Employee: AbstractEmployee{
    private:
        string name;
        int age;

    public:
    Employee(string name, int age){
        this->name = name;
        this->age = age;
    }

    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }

    void AskForPromotion(){
        if (age > 30)
        {
            cout << name << " is promoted" << endl;
        } else {
            cout << name << " is not promoted" << endl;
        }
        
    }
};
int main(){
    Employee employee1("Sohan", 22);
    cout << employee1.getName() << "\n" << employee1.getAge() << endl;

    employee1.AskForPromotion();

    return 0;
}