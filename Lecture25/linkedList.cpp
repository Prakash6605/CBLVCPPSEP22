// linkedList.cpp

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int val;
	Node* next;

	Node(){
		cout << " Default Constructor " << endl;
	}

	Node(int data){
		val = data; // 2
		next = NULL; // null
	}
};

void insertFromEnd(Node* &head , Node* &tail , int data){

	if( head == NULL && tail == NULL){
		// I have a empty linkedlist
		Node* n = new Node(data);
		head = n ;
		tail = n ;
	}else{
		Node* n = new Node(data);
		tail->next = n ;
		tail = tail->next;
	}

}

void printLL(Node* &t){

	while(t){
		cout << t->val << " --> ";
		t = t->next;
	}
	return;

}



int main(){




	// Node* n1 = new Node; // default constructor
	// n1->val = 1;
	// n1->next = NULL;



	// cout << n1->val << endl;

	// Node* n2 = new Node(2);

	// cout << n2->val << endl;

	Node* head = NULL;
	Node* tail = NULL;

	insertFromEnd(head,tail,1);
	insertFromEnd(head,tail,2);
	insertFromEnd(head,tail,3);
	insertFromEnd(head,tail,4);


	printLL(head);

	cout << endl;

	cout << ( head == NULL ? "null " : "SOMETHING IS THERE") <<endl;

	printLL(head);



	// 1 -> 2 -> 3 -> 4





}