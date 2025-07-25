#include <iostream>
#include "StackMine.hpp"    
// #include <...> → looks for header in standard system paths
// #include "..." → looks in your local project directory first, then in system paths
using namespace std;

StackMine::StackMine(int n)
{
    this->n = n;
    TOP = -1;         // constructor already calls it for the first time by default and then it's going to be -1
    arr = new int[n]; // memory allocation

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}

StackMine::~StackMine()
{
    delete[] arr;
}

bool StackMine::isEmpty()
{
    if (TOP == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool StackMine::isFull()
{
    if (TOP == n - 1)
    {
        return true;
    }
    else
        return false;
}

void StackMine::push(int value)
{
    if (isFull())
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        TOP++;
        arr[TOP] = value;
    }
}

int StackMine::pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        int popValue = arr[TOP];
        arr[TOP] = 0;
        TOP--;
        return popValue;
    }
}

int StackMine::count()
{
    return TOP + 1;
}

int StackMine::top()
{
    return arr[TOP];
}

void StackMine::display()
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}