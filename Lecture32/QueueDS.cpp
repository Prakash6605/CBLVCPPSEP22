#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* next;
    int data;

    Node(int d){
        next = NULL;
        data = d;
    }
};

class Queue{
public:
    Node *front , *rear ;

    Queue(){
        front = rear = NULL;
    }

    // push(data)
    void push(int data){

        Node* newNode = new Node(data);

        if(front == NULL){
            // empty
            front = rear = newNode;
        }else{
            rear->next = newNode;
            rear = rear->next;
        }

    }

    void pop(){

        if(front == NULL){
            cout << " Queue is empty " << endl;
            return;
        }
        else if( front->next == NULL){
            delete front;
            front = rear = NULL;
        }
        else{
            Node* to_del = front;

            front = front->next ;

            delete to_del;
        }

    }

    int getFront(){

        if(front == NULL){
            cout <<" Queue is empty " << endl;
            return -1;
        }else{
            return front->data;
        }
    }

    bool isEmpty(){
        return (front == NULL ? true : false);
    }
};

int main(){

    Queue q;

    q.push(10);
    cout << " front " << q.getFront() << endl;
    q.push(20);
    cout << " front " << q.getFront() << endl;
    q.push(30);
    cout << " front " << q.getFront() << endl;

    q.pop();
    cout << " front " << q.getFront() << endl;


}