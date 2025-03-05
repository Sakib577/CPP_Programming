#include <iostream>
using namespace std;

// dynamic memory = Memory that is allocated after the program
//                  is already compiled & running.
//                  Use the 'new' operator to allocate
//                  memory in the heap rather than the stack

//                  Useful when we don't know how much memory
//                  we will need. Makes our programs more flexible,
//                  especially when accepting user input. 

int main(){
    int *pNum= NULL;

    pNum = new int;

    *pNum = 23;

    cout << pNum << endl;
    cout << *pNum << endl;

    delete pNum; // to prevent memory leak whenever we use new keyword we have to delete it afterwards
    return 0;
}