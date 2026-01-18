#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth; 
};



int main(){

    struct Rectangle r1
    {
        10,5
    };
    
    cout << sizeof(r1) << endl;
    cout << r1.length << " " << r1.breadth << endl;
    return 0;
}