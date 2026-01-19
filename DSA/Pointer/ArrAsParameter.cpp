#include <bits/stdc++.h>
using namespace std;

void fun(int A[], int n){// or int *A
    cout << sizeof(A)/sizeof(int) << endl; // 2 because it's taking as pointer
    // for(int x: A) cout << x; // can't be used because it acts like a pointer
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
    }
    A[2]=30;
    
    cout << endl;
}

int main(){
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A,n);
    cout << sizeof(A)/sizeof(int) << endl; // 5 because it's the size of array
    for(int x: A) cout << x ;
    cout << endl;


    return 0;
}