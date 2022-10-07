// passingArrayToFunctions.cpp

#include<iostream>
using namespace std;

// constraint n = 100
// n = 5 , 98 , 100
void print(int arr[100] , int n){
	// how you will get the size of array ?

	// int n = sizeof(arr)/sizeof(int);

	for(int i = 0 ; i < n ; i++){
		cout<<arr[i] << " " ;
	}

	// cout<<" n : " << n << endl;

	return;

}


void update(int arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		arr[i] = arr[i] + 10 ;
	}
	return;
}


int main(){


	int arr[] = {1,2,3,4};

	// n

	cout<<" size of int : " << sizeof(int) << endl;
	cout<<" size of arr : " << sizeof(arr) << endl;

	int n = sizeof(arr)/sizeof(int);

	cout<<" n : " << n << endl;
	print(arr,n);

	update(arr,n);

	cout<< endl;

	print(arr,n);
}