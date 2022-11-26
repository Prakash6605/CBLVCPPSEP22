#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node{
public:
    Node* next;
    T data;

    Node(Node* n , T d){
        next = n ;
        data = d ;
    }
};

template<typename T>
class StackLL{
public:
    Node<T>* head , *tail;

    StackLL(){
        head = tail = NULL;
    }

    // push(x)
    void push(T data){
        if(head == NULL && tail == NULL){
            head = tail = new Node<T>(NULL,data);
        }else{
            tail->next = new Node<T>(NULL,data);
            tail = tail->next;
        }
    }

    //pop()
    void pop(){
        //empty ll
        if(head == NULL && tail == NULL){
            cout << " Stack is Empty " << endl;
            return;
        }else{

            if(head == tail){
                delete head;
                head = tail = NULL;
                return;
            }

            Node<T>* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }

            delete tail;

            temp->next = NULL;

            tail = temp;
        }

    }

    // top()
    T top(){
        if(tail == NULL){
            cout <<" Stack Empty " << endl;
            return -1;
        }else return tail->data;
    }


    bool isEmpty(){
        return (head == NULL && tail == NULL);
    }


};


int main(){

    StackLL<int> s;

    s.push(12);
    cout << " top " << s.top() << endl;
    
    s.push(13);
    cout << " top " << s.top() << endl;
    
    s.push(34);

    cout << " top " << s.top() << endl;

    s.pop();

    cout << " top " << s.top() << endl;
    

}