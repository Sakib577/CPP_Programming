#include <iostream>
using namespace std;

int main(){
    char *pGrades = NULL;
    int size;
    cout << "How many grades to enter in: ";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade " << i+1 << ": ";
        cin >> *(pGrades + i);  // cin >> pGrades[i]; they both does the same thing
    }

    for(int i = 0; i < size; i++)
    {
        cout << "GPA of " << i+1 << ": " << pGrades[i] << endl;
    }
    
    return 0;
}