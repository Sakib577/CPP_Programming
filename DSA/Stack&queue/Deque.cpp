#include <iostream>
using namespace std;

class Deque
{
private:
    int FRONT;
    int REAR;
    int *arr;
    int n;

public:
    Deque(int n)
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
        if (FRONT == -1)
        {
            return true;
        }
        else
            return false;
    }

    bool isFull()
    {
        if (FRONT == (REAR + 1) % n)
        {
            return true;
        }
        else
            return false;
    }

    void pushback(int value)
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
            REAR = (REAR + 1) % n;
        }
        arr[REAR] = value;
    }
    void pushfront(int value)
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
            FRONT = (FRONT -1+ n) % n;
        }
        arr[FRONT] = value;
    }

    int popback()
    {
        int popValue;
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        else if (REAR == FRONT)
        {
            popValue = arr[REAR];
            arr[REAR] = 0;
            REAR = FRONT = -1;
        }
        else
        {
            popValue = arr[REAR];
            arr[REAR] = 0;
            REAR = (REAR -1+ n) % n;
        }
        return popValue;
    }
    int popfront()
    {
        int popValue;
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
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
            FRONT = (FRONT + 1) % n;
        }
        return popValue;
    }

    int count()
    {
        if (isEmpty())
        {
            return 0;
        }
        else if (REAR >= FRONT)
        {
            return REAR - FRONT + 1;
        }
        return n - FRONT + REAR + 1;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[FRONT];
    }

    int back()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[REAR];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Empty" << endl;
            return;
        }

        int i = FRONT;
        while (true)
        {
            cout << arr[i] << endl;
            if (REAR == i)
            {
                break;
            }
            i = (i + 1) % n;
        }
    }
};

int main()
{
    int n;
    cout << "Input the size of queue:" << endl;
    cin >> n;

    Deque dq(n);
    cout << "Pushback all:" << endl;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        dq.pushback(in);
    }
    cout << endl;
    dq.display();
    cout << endl;

    cout << "Popfront: " << endl;
    dq.popfront();
    dq.display();
    cout << "PopBack: "<< endl;
    dq.popback();
    dq.display();

    cout << "Pushfront: "<< endl;
    dq.pushfront(10);
    dq.display();
    cout << "Pushback: " << endl;
    dq.pushback(20);
    dq.display();

    cout << "Is full :" << dq.isFull() << endl;
    cout << "Is empty :" << dq.isEmpty() << endl;
    cout << "Popback all:" << endl;

    while (!dq.isEmpty())
    {
       dq.popback();
    }

    cout << "Now is empty: " << dq.isEmpty() << endl;
    return 0;
}