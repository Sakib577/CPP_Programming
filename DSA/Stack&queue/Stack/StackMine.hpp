#ifndef STACKMINE_H
#define STACKMINE_H


class StackMine
{
private:
    int n;
    int TOP;
    int* arr;

public:
    StackMine(int n);
    ~StackMine();
    bool isEmpty();

    bool isFull();
    void push(int value);

    int pop();
    int count();

    int top();

    void display();
};

#endif  // <- This closes the #ifndef block