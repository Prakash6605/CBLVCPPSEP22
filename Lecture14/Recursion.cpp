// Recursion.cpp
#include <iostream>
using namespace std;


int sumOfArray(int arr[] , int n){

	//base case
	if( n == 1 ){
		return arr[0];
	}


	// recursive case
	int sum = arr[0] + sumOfArray(arr+1,n-1);

	return sum;

}

int sumOfArray1(int arr[] , int n , int i  = 0){

	if( i == n - 1 ){
		return arr[i];
	}

	int sum = arr[i] + sumOfArray1(arr, n , i+1);

	return sum ;
}

void printArrayForward(int arr[],int i ,int n ){

	// if( i == n ){
	// 	return;
	// }

	if( i == n - 1 ){
		cout << arr[i] << " ";
		return; 
	}


	cout<< arr[i] << "  " ;

	printArrayForward(arr,i+1,n);



	return;

}

void printArrayBackward(int arr[],int i ,int n ){

	if( i == n ){
		return;
	}


	printArrayBackward(arr,i+1,n);

	cout<< arr[i] << "  " ;

}

// sum of array


int sumOfArrayRecurType1(int arr[] , int i , int n){

	int sum = 0 ;


	if( i == n - 1){
				// arr[n]
		sum = arr[i];

	}
	else{
											// (arr,n(n-1+1),n)
		sum = arr[i] + sumOfArrayRecurType1(arr,i+1,n);
	}

	return sum ;

}

int sumOfArrayRecurType2(int arr[] , int i , int n){


	if( i == n - 1){
		
		return arr[i];
	}
		
	int sum = arr[i] + sumOfArrayRecurType1(arr,i+1,n);
	

	return sum ;

}









int main(){


	int  arr[] = {1,2,3,4,2};

	int n = sizeof(arr)/sizeof(int);


	int sum = sumOfArrayRecurType1(arr,0,n);

	cout << " sum is : " << sum << endl;

	int sum1 = sumOfArrayRecurType2(arr,0,n);

	cout << " sum1 is : " << sum1 << endl;


	// int sum1 = sumOfArray1(arr,n);

	// cout << " sum is : " << sum1 << endl;

	// printArrayForward(arr,0,n);

	// cout<< endl;
	// printArrayBackward(arr,0,n);
	return 0;
}