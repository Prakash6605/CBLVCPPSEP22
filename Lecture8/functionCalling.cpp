// functionCalling.cpp
// ternaryOperator.cpp
#include<iostream>
using namespace std;


void fun4(){
	cout<<" in function 4 " << endl;
}

void fun3(){
	cout<<" in function 3 " << endl;
}

void fun2(){
	fun4();
	cout<<" in function 2 " << endl;
}

void fun1(){
	fun2();
	fun3();
	cout<<" in function 1 " << endl;
}

int main(){


	fun1();


	return 0;
}