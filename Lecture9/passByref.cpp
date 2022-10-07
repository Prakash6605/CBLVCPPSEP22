// passByref.cpp
#include <iostream>
using namespace std;


void update(int a){
	a = a + 10 ;
	return ;
}

void update1(int& a){
	a = a + 10 ;

	return;
}

int main(){

	int a = 10 ; 

	update(a);

	cout<<" a after pass by value : " << a << endl;

	update1(a);

	cout<<" a after pass by reference : " << a << endl;
}