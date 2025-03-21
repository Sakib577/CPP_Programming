#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0; 
    // by doing this we can make it obligatory (which means
    // any classes that uses AbstractEmployee, needs to implement this method)

};

class Employee: public AbstractEmployee{
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

class Developer: public Employee{
    public:
        string FavProgrammingLang;
        Developer(string name, int age, string FavProgrammingLang)
            :Employee(name, age){
            this->FavProgrammingLang = FavProgrammingLang; 
        } // we have to write the constructor because the parent class have it
};

// main
int main(){
    Employee employee1("Sohan", 22);
    cout << employee1.getName() << "\n" << employee1.getAge() << endl;

    employee1.AskForPromotion();

    Developer developer1("sadik", 31, "Python");
    cout << developer1.getName() << "\n" << developer1.getAge() <<"\n"  << developer1.FavProgrammingLang <<  endl;

    developer1.AskForPromotion();

    return 0;
}