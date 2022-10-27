// dma.cpp
#include <bits/stdc++.h>
using namespace std;


int main(){

	int a = 10;

	int* aptr = &a;

	int** aptr_ptr = &aptr;



	cout << " a " << a << endl;
	cout << " &a " << &a << endl;
	cout << " aptr " << aptr << endl;
	cout << " *aptr " << *aptr << endl;
	cout << " &aptr " << &aptr << endl;
	cout << " aptr_ptr " << aptr_ptr << endl;
	cout << " *aptr_ptr " << *aptr_ptr << endl;

	return 0;
}