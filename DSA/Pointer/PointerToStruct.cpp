#include <bits/stdc++.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};


int main(){

    struct rectangle r=    // in c++ can be written as rectangle r=.... no need to write struct
    {
        10,5
    };
    
    cout << r.length << endl;
    cout << r.breadth << endl;

    struct rectangle *p=&r; // same as before, can be written without struct
    cout << p->length << endl;
    cout << p->breadth << endl;

    // object of a struct in heap or dynamic allocation

    rectangle *p2;
    // p2=(struct rectangle *) malloc(sizeof(struct rectangle));      // in c or c++

    p2=new rectangle;

    p2->length=24;
    p2->breadth=45;

    cout << p2->length << endl;
    cout << p2->breadth << endl;

    return 0;
}