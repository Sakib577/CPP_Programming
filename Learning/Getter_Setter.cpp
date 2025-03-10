#include <iostream>
using namespace std;

// Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute READABLE
// setter = function that makes a private attribute WRITEABLE
class Stove{
    public:
        int temperature = 0;
    
    private:
        int ptemp = 0;

    public:  // we have to add another public access modifier to make the following statements accessable to other classes
    int getptemp(){
        return ptemp;
    }

    void setptemp(int ptemp){
        if (ptemp >= 0 && ptemp <=3000)
        {
            this->ptemp = ptemp;
        }
    }
};

int main(){
    Stove stove;
    stove.temperature = 1000000;
    cout << "Temp: " << stove.temperature << endl;

    // stove.ptemp = 1000; // It'll give an error for trying to change a private variable
    // cout << "Temp: " << stove.ptemp << endl; // this will also give an error for trying to access a private variable

    stove.setptemp(300);
    cout << "Temp: " << stove.getptemp() << endl;
    return 0;
}