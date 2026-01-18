#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[5]={2,4,6,8,10};
    int *p;
    p= A; // don't need & before array because A or A[0] would be right

    
        printf("using pointer %d %d \n", p, &A[0]);

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    
    
    return 0;
}