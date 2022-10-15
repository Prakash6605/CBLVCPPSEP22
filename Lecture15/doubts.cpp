// doubts.cpp
// getting array from a function
#include <iostream>
using namespace std;


int* updateIntoNewArray(int a[] , int n ){

	int newArray[n];

	for(int i = 0 ; i < n ; i++){
		newArray[i] = 2 * a[i];
	}

	return newArray;
}

void printArray(int arr[] , int n){
	for(int i = 0 ; i < n ; i++){
		cout<< arr[i] << " ";
	}

	return ;
}

int main(){

// int arr[10];
	// arr -> 
int a[4] = {1,2,3,4};
int n = 4 ;
int* arr = updateIntoNewArray(a,n);

// printArray(arr,n);

cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;


return 0;

}