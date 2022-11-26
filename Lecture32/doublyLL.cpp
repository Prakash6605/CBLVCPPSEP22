#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* prev , *next;
    int data;

    Node(int d){
        prev = NULL;
        next = NULL;
        data = d;
    }
};

class DLL{
public:
    Node* head , *tail ;

    DLL(){
        head = tail = NULL;
    }

    void insertFromEnd(int data){
        Node* nw = new Node(data);
        if( head == NULL ){
            head = tail = nw;
        }else{
            tail->next = nw;
            nw->prev = tail;
            tail = tail->next;
        }
    }

    void insertFromFront(int data){
        Node* nw = new Node(data);

        if(head == NULL){
            head = tail = nw;
        }else{
            nw->next = head;
            head->prev = nw;
            head = head->prev;
        }
    }

    void removeFromFront(){

        if(head == NULL){
            cout << " Empty DLL "  << endl;
            return;
        }else if( head->next == NULL ){

            delete head;
            head = tail = NULL;
        }else{

            Node* to_del = head;

            head = head->next ;
            head->prev = NULL;

            delete to_del;

        }


    }

    void printFromStart(){
        Node* temp = head;

        while(temp){
            cout << temp->data << " " ;
            temp = temp->next;
        }
    }

    void printFromEnd(){

        Node* temp = tail;
        while(temp){
            cout << temp->data << " ";
            temp = temp->prev;
        }

    }
};

int main(){

    DLL l;
    l.insertFromEnd(3);
    l.insertFromFront(2);
    l.insertFromFront(1);
    l.insertFromFront(0);
    l.printFromStart();
    l.removeFromFront();
    cout << endl;
    l.printFromEnd();

    return 0;
}