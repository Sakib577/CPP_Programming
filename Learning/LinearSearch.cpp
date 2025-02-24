#include <iostream>
using namespace std;

int searchArray(int array[], int size, int element); // function declaration

int main(){
    int Array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(Array)/sizeof(Array[0]);
    int index; // index of the searched element
    int mynum; // number that We'll search for

    cout << "Enter the element you want to search for: " << endl;

    cin >> mynum;

    index = searchArray(Array,size,mynum);
    if (index == -1)
    {
        cout << mynum << " is not in the Array." << endl;
    } else {
        cout << mynum << " is at " << index << endl;
    }
    

    return 0;
}

int searchArray(int array[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;   
        }
    }
    
    return -1; // in programming -1 means something is not found.
}