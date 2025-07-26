#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

stack <ll> A,B,C;

void moveDisk(char from, char to){
    ll disk;
    if(from=='A'){
        disk=A.top();
        A.pop();
    } else if(from=='B'){
        disk=B.top();
        B.pop();
    } else {
        disk=C.top();
        C.pop();
    }

    if(to == 'A'){
        A.push(disk);
    } else if(to =='B'){
        B.push(disk);
    } else {
        C.push(disk);   
    }

    cout << "Move disk " << disk << " from " << from << " to " << to << endl;
}

void TOH(ll n,char beg, char aux, char end){
    if(n==1){
        moveDisk(beg,end);
    } else {
        TOH(n-1,beg,end,aux);
        moveDisk(beg,end);
        TOH(n-1,aux,beg,end);
    }
}

int main(){
    ll n;
    
    cout << "Enter number of disks: " << endl;
    cin >> n;

    for (ll i = n; i >= 1; i--)
    {
        A.push(i);
    }
    
    cout << "Steps to solve hanoi tower wiht " << n << " disks:" << endl;
    TOH(n,'A','B','C');

    return 0;
}