#include <iostream>
using namespace std;

class Queue
{
private:
    int FRONT;
    int REAR;
    int *arr;
    int n;

public:
    Queue(int n)
    {
        this->n = n;
        arr = new int[n];
        FRONT = -1;
        REAR = -1;
        for (int i = 0; i < n; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (FRONT == -1 && REAR == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {
        if (REAR == n - 1)
        {
            return true;
        }
        else
            return false;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        else if (isEmpty())
        {
            REAR = FRONT = 0;
        }
        else
        {
            REAR++;
        }
        arr[REAR] = value;
    }

    int pop()
    {
        int popValue;
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return 0;
        }
        else if (REAR == FRONT)
        {
            popValue = arr[FRONT];
            arr[FRONT] = 0;
            REAR = FRONT = -1;
        }
        else
        {
            popValue = arr[FRONT];
            arr[FRONT] = 0;
            FRONT++;
        }
        return popValue;
    }

    int count()
    {
        return REAR - FRONT + 1;
    }

    int front()
    {
        return arr[FRONT];
    }

    int back()
    {
        return arr[REAR];
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Input the size of queue:" << endl;
    cin >> n;

    Queue q(n);
    cout << "Push all:" << endl;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        q.push(in);
    }
    cout << endl;
    q.display();
    cout << endl;

    cout << "pop:" << endl;
    q.pop();
    q.display();
    cout << endl;

    cout << "Is full :" << q.isFull() << endl;
    cout << "Is empty :" << q.isEmpty() << endl;
    cout << "Pop all:" << endl;

    while (!q.isEmpty())
    {
        q.pop();
    }
    
    cout << "Now is empty: " << q.isEmpty() << endl;
    return 0;
}