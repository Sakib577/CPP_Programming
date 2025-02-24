#include <iostream>
using namespace std;

int main()
{
    int Array[] = {4,6,7,5,7};

    cout << sizeof(Array)/sizeof(Array[0]) << " Elements" << endl;
    return 0;
}