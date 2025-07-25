#include <iostream>
#include "StackMine.hpp"
using namespace std;

int main()
{

    int n;
    cout << "Input the size of stack:" << endl;
    cin >> n;

    StackMine s1(n);
    cout << "Push all:" << endl;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        s1.push(in);
    }
    cout << endl;

    s1.display();

    cout << "Pop:" << endl;
    s1.pop();
    s1.display();

    cout << "Push:" << endl;
    int in;
    cin >> in;
    s1.push(in);
    s1.display();

    cout << "Is full: " << s1.isFull() << endl;
    cout << "Is empty: " << s1.isEmpty() << endl;

    cout << "pop all:" << endl;
    for (int i = 0; i < n; i++)
    {
        s1.pop();
    }
    cout << "Now is empty: " << s1.isEmpty() << endl;

    return 0;
}