// findPosOf7.cpp
#include<iostream>
using namespace std;

bool isSevenPresent(int arr[] , int n , int i ){

	if( i == n ){
		return false;
	}

	if( arr[i] == 7 ){
		return true;
	}

	bool seahead = isSevenPresent(arr,n,i+1);

	if(seahead == true){
		return true;
	}else{
		return false;
	}


}

void isSevenPresentWithoutBool(int arr[] , int n , int i ){

	if( i == n ){
		cout << "Not Present" << endl;
		return;
	}

	if( arr[i] == 7 ){
		// return true;
		cout<<" Present " << endl;
		return;
	}

	 isSevenPresentWithoutBool(arr,n,i+1);

	return;


}

int main(){

	int arr[] = {1,2,7,4,3,7,7,7,8,7,9,9};
	// int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);


	// cout << (isSevenPresent(arr,n,0) ? "Present" : "Not Present") << endl;

	isSevenPresentWithoutBool(arr,n,0) ;

	// cout << firstPosOfSeven(arr,n,0) << endl;

	// cout << lastPosOfSeven(arr,n,n-1) << end;

	// allPosOfSeven(arr,n,0) ;


	return 0;
}