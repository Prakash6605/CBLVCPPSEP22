#include<bits/stdc++.h>
using namespace std;

template<typename T>
class stackClass{
public:
    T *arr;
    int top , size ;

    stackClass(int s){
        arr = new T[s];
        top = -1 ;
        size = s ;
    }

    void push(T data){

        // show some error mssg if stack is full
        if( top == size - 1){
            cout << " Stack is Full ";
            return;
        }

        arr[++top] = data;
        return;

    }

    void pop(){
        // if stack is already empty , then no need to pop
        if(top == -1){
            cout << " Stack is Empty " << endl;
        }
        top--;
    }

    T topElement(){
        // stack is empty
        if(top == -1){
            cout << "No Element to access" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){

        if(top == -1){
            return true;
        }else{
            return false;
        }

    }

};

int main(){

    stackClass<int> s(5);

    s.push(1);
    cout << " top " << s.topElement() << endl;
    s.push(2);
     cout << " top " << s.topElement() << endl;
    s.push(3);
     cout << " top " << s.topElement() << endl;
      s.push(11);
    cout << " top " << s.topElement() << endl;
    s.push(21);
     cout << " top " << s.topElement() << endl;
    s.push(31);
     cout << " top " << s.topElement() << endl;




    return 0;
}