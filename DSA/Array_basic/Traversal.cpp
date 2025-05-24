#include <iostream>
using namespace std;
void traverse(int* arr, int L, int U){
    for (int i = L; i <= U; i++)
    {
        cout << arr[i] <<" ";
    }
    
}

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    traverse(arr,0,9);
}