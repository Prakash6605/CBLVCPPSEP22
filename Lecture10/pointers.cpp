// pointers.cpp

#include<iostream>
using namespace std;

void fun(int* a){
	cout<<a<<endl;
	return ;
}

int main(){

	int a = 10;
	fun(&a);
	int* aptr = &a;

	float f = 12.11;
	float* fptr = &f;

	double d = 13.345;
	double* dptr = &d;

	char ch = 'A';
	char* chptr = &ch;

	// cout<<a<<endl;
	cout<<&a<<endl;
	// cout<<aptr << endl;
	// cout<<*aptr<<endl;

	// cout<<ch<<endl;
	// cout<<(int*)&ch<<endl;
	// cout<<(int*)chptr << endl;
	// cout<<*chptr<<endl;
	
	// cout<<&f<<endl;
	// cout<<&d<<endl;

	return 0;
}