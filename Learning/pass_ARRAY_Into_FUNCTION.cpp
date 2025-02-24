#include <iostream>
using namespace std;

int getTotal(int Arr[], int size){

    int total =0;

    // for (int i = 0; i < sizeof(Arr[])/sizeof(Arr[0]); i++)
    // {
    //     total += Arr[i];
    // }
    // ** It won't work after passing the array because here it works only with the pointers of this array  so it doesn't know what it's size is.
    
    for (int i = 0; i < size; i++)
    {
        total += Arr[i];
    }
    return total;
}
int main(){
    int Array[] ={3,5,5,6,2,4,6,1};

    double Total= getTotal(Array, sizeof(Array)/sizeof(Array[0]));
    cout << "Total $" << Total << endl;
    return 0;
}