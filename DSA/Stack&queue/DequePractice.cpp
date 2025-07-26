#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Deque{
    private:
        ll front;
        ll rear;
        ll *arr;
        ll n;

    public:
        Deque(ll n){
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

        void pushback(ll x){
            if(isFull()) cout << "Queue Overflow" << endl;
            else if(isEmpty()) {
                rear=front=0;
                arr[rear]=x;
            } else {
                rear=(rear+1)%n;
                arr[rear]=x;
            }
        }

        void pushfront(ll x){
            if(isFull()) cout << "Queue overflow" << endl;
            else if(isEmpty()){
                rear=front=0;
                arr[front]=x;
            } else {
                front=(front-1+n)%n;
                arr[front]=x;
            }
        }

        void popfront(){
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

        void popback(){
            if(isEmpty()) cout << "Queue underflow" << endl;
            else if(rear==front){
                arr[rear]=0;
                front=rear=-1;
            } else {
                arr[rear]=0;
                rear=(rear-1+n)%n;
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
    Deque q(n);

    ll option,value;
    do{
        cout << "Select an option/ select 0 to exit" << endl;
        cout << "1. pushfront()" << endl;
        cout << "2. pushfront()" << endl;
        cout << "3. popfront()" << endl;
        cout << "4. popback()" << endl;
        cout << "5. isEmpty()" << endl;
        cout << "6. isFull()" << endl;
        cout << "7. Front()" << endl;
        cout << "8. Rear()" << endl;
        cout << "9. Display()" << endl;
        cout << "10. Count()" << endl;
        
        cin >> option;

        switch (option)
        {
        case 1 :
            cout << "Enter an item to pushfront:" << endl;
            cin >> value;
            q.pushfront(value);
            break;
        case 2 :
            cout << "Enter an item to pushback: " << endl;
            cin >> value;
            q.pushback(value);
            break;
        case 3:
            cout << "Popping the front item" << endl;
            cout << "Pop val: " << q.Front() << endl;
            q.popfront();
            break;
        case 4:
            cout << "Popping the rear item" << endl;
            cout << "Pop val: " << q.Rear() << endl;
            q.popback();
            break;    
        case 5:
            cout << q.isEmpty() << endl;
            break;
        case 6:
            cout << q.isFull() << endl;
            break;
        case 7:
            cout << q.Front() << endl;
            break;
        case 8:
            cout << q.Rear() << endl;
            break;
        case 9:
            q.display();
            break;
        case 10:
            cout << q.count() << endl;
            break;

        default:
            break;
        }

    }while (option != 0);
    
    return 0;
}