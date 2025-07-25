#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

class StackOWN{
    private:
        ll top;
        ll n;
        ll *arr;

    public:
        StackOWN(ll n){
            this->n=n;
            top=-1;
            arr= new ll[n]; // dynamic allocation fo array

            for (ll i = 0; i < n; i++)
            {
                arr[i]=0;
            }
        }

        bool isEmpty(){
            if(top==-1) return true;
            else return false;
        }

        bool isFull(){
            if(top==n-1) return true;
            else return false;
        }

        void push(ll x){
            if(isFull()){
                cout << "Stack Overflow" << endl;
            } else {
                top++;
                arr[top]=x;
            }
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack Underflow" << endl;
            } else {
                arr[top]=0;
                top--;
            }
        }

        ll Top(){
            if(isEmpty()){
                cout << "StackUnderflow" << endl;
                return 0;
            } else {
                return arr[top];
            }
        }

        void display(){
            for(ll i=0; i<= top;i++) cout << arr[i] << " ";
            cout << endl;
        }
};

int main(){

    ll n;
    cin >> n;

    ll option, value;

    StackOWN st(n);

    do{
        cout << "Select an option/ select 0 to exit" << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Top()" << endl;
        cout << "6. Display()" << endl;
        
        cin >> option;

        switch (option)
        {
        case 1 :
            cout << "Enter an item to push:" << endl;
            cin >> value;
            st.push(value);
            break;
        case 2:
            cout << "Popping the top item" << endl;
            cout << "Pop val: " << st.Top() << endl;
            st.pop();
            break;
        case 3:
            cout << st.isEmpty() << endl;
            break;
        case 4:
            cout << st.isFull() << endl;
            break;
        case 5:
            cout << st.Top() << endl;
            break;
        case 6:
            st.display();
            break;

        default:
            break;
        }

    }while (option != 0);
    

    return 0;
}