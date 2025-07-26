#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

class Node{
    public:
    ll data;
    Node* next;

    Node(ll d){
        data=d;
        next=NULL;
    }

};

class LinkedList{
    public:
    Node* head;
    Node* tail;

    LinkedList(){
        head=tail=NULL;
    }

    void pushFront(ll d){
        Node* newNode=new Node(d);
        if(head==NULL){
            head=tail=newNode;
        } else {
            newNode->next= head;
            head=newNode;
        }
    }

    void pushBack(ll d){
        Node* newNode= new Node(d);
        if(head==NULL){
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }
    }

    void popFront(){
        if(head==NULL){
            cout << "Linked list is empty" << endl;
        } else {
            Node* temp= head;
            head=head->next;
            temp->next=NULL;

            delete temp;
        }
    }

    void popBack(){
        if(head==NULL){
            cout << "Linked list is empty" << endl;
        } else {
            Node* temp=head;
            while (temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail = temp;
        }
    }


    void printLL(){
        Node* temp=head;

        while (temp!=NULL)
        {
            cout << temp->data << "->";
            temp=temp->next;
        }
        cout << "NULL" <<endl;
    }

    void insert(ll d, ll pos){
        if(pos<0){
            cout <<"Invalid position" << endl;
        } else if(pos==0){
            pushFront(d);
        } else {
            Node* temp=head;
            for (ll i = 0; i <pos-1; i++)
            {
                temp=temp->next;
            }
            Node* newNode=new Node(d);
            newNode->next=temp->next;
            temp->next=newNode;
        }
    }
};

int main(){

    LinkedList L;

    L.pushFront(3);
    L.printLL();
    L.pushFront(2);
    L.printLL();
    L.pushFront(1);
    L.printLL();

    L.pushBack(4);
    L.printLL();
    L.popFront();
    L.printLL();
    L.popBack();
    L.printLL();

    L.insert(6,1);

    L.printLL();
    

    return 0;
}