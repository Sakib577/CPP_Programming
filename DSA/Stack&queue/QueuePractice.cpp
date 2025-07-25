#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Queue{
    private:
        ll front;
        ll rear;
        ll *arr;
        ll n;

    public:
        Queue(ll n){
            this->n=n;
            arr= new ll[n];
            front=-1;
            rear=-1;
            for (ll i = 0; i < n; i++)
            {
                arr[i]=0;
            }
            
        }

        bool isEmpty(){
            if(front==-1 && rear==-1){
                return true;
            } else return false;
        }

        bool isFull(){
            if(front==(rear+1)%n) return true;
            else return false;
        }

        void push(ll x){
            if(isFull()) cout << "Queue Overflow" << endl;
            else if(isEmpty()) {
                rear=front=0;
                arr[rear]=x;
            } else {
                rear=(rear+1)%n;
                arr[rear]=x;
            }
        }

        void pop(){
            if(isEmpty()) cout << "Queue underflow" << endl;
            else if(rear==front){
                arr[front]=0;
                front=-1;
                rear=-1;
            } else {
                arr[front]=0;
                front=(front+1)%n;
            }
        }

        ll Front(){
            if(isEmpty()) { 
                cout << "Queue is empty" << endl;
                return 0;
            }

            return arr[front];
        }

        ll Rear(){
            if(isEmpty()) { 
                cout << "Queue is empty" << endl;
                return 0;
            }

            return arr[rear];
        }

        ll count(){
            if(isEmpty()) return 0;
            else if(rear>front) return rear+1-front;
            else return rear+1+(n-front);
        }

        void display(){
            if(isEmpty()) {
                cout << "Queue is empty." << endl;
                return;
            }

            ll i=front;
            while (true)
            {
                cout << arr[i] << " ";
                if(i==rear){
                    break;
                }
                i=(i+1)%n;
            }
        }
};

int main(){
    ll n;
    cin >> n;
    Queue q(n);

    ll option,value;
    do{
        cout << "Select an option/ select 0 to exit" << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Front()" << endl;
        cout << "6. Rear()" << endl;
        cout << "7. Display()" << endl;
        cout << "8. Count()" << endl;
        
        cin >> option;

        switch (option)
        {
        case 1 :
            cout << "Enter an item to push:" << endl;
            cin >> value;
            q.push(value);
            break;
        case 2:
            cout << "Popping the top item" << endl;
            cout << "Pop val: " << q.Front() << endl;
            q.pop();
            break;
        case 3:
            cout << q.isEmpty() << endl;
            break;
        case 4:
            cout << q.isFull() << endl;
            break;
        case 5:
            cout << q.Front() << endl;
            break;
        case 6:
            cout << q.Rear() << endl;
            break;
        case 7:
            q.display();
            break;
        case 8:
            cout << q.count() << endl;
            break;

        default:
            break;
        }

    }while (option != 0);
    
    return 0;
}