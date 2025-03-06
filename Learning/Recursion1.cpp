#include <iostream>
using namespace std;

// recursion = a programming technique where a function
//          invokes itself from within
//          break a complex concept into a repeatable single step

//          advantages = less code and is cleaner
//          useful for sorting and searching algorithms

//          disadvantages = uses more memory
//          slower

void walk(int step);

int main()
{
    walk(5);

    return 0;
}

void walk(int step)
{
    if (step > 0)
    {
        cout << "I'm walking." << endl;
        walk(step-1);
    }
}