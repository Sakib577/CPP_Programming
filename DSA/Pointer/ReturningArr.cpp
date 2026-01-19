#include <bits/stdc++.h>
using namespace std;

int * fun(int size){
    int *p;
    p=new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i]=i+1;
    }
    return p;
}

int main(){

    int n;
    cin >> n;

    int *A;
    A=fun(n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}