// pointersAndArray.cpp
#include<iostream>
using namespace std;

void updateArray(int arr[] , int n){

	for(int i = 0 ; i < n ; i++){
		// cout << arr[i] << " " ; 
		arr[i] = arr[i] + 10 ;
	}

	cout<<endl;
}


void printArray1(int* arr , int n){

	cout<< sizeof(arr) << endl;
	for(int i = 0 ; i < n ; i++){
		cout << *(arr+i) << " " ; 
	}

	cout<<endl;
}


int main(){

	int a[] = {1,2,3,4};

	cout<<" array size : " << sizeof(a) << endl;

	cout<<a<< endl;
	cout<<*a << endl;
	cout<< *(a+1) << endl;
	cout<< *(a+2) << endl;
	cout<< *(a+3) << endl;


	updateArray(a,4);

	printArray1(a,4);


}