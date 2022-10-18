// bubbleSort.cpp
#include<iostream>
using namespace std;

// void bubbleSort(int arr[] , int i , int n){

// 	if( i == n ){
// 		return;
// 	}


// 	for(int j = 0 ; j < n - 1 ; j++){
// 		if(arr[j] > arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}

// 	bubbleSort(arr,i+1,n);

// }

void bubbleSort(int arr[] , int i , int j  , int n ){

	if( i == n ){
		return;
	}

	if( j < n - 1 ){
		if(arr[j] > arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubbleSort(arr,i,j+1,n);
		//command
	}else
	 	bubbleSort(arr,i+1,0,n);

}


int binarySearch(int arr[] , int n , int s , int e , int ns){

	// base case
	if( s > e ){
		return -1;
	}

	int mid = s + ( e - s ) / 2 ;
	if( arr[mid] == ns ){
		return mid ;
	}else if( arr[mid] < ns ){
		return binarySearch(arr,n,mid+1,e,ns);
	}else{
		return binarySearch(arr,n,s,mid-1,ns);
	}

}

bool isArraySorted(int arr[] , int n ){


	for(int i = 0 ; i < n - 1 ; i++){
		if(arr[i] > arr[i+1]){
			return false;
		}
	}
	return true;
}


bool isArraySortedRecursive(int arr[] , int i , int n){
	
	// base case
	if( i == n - 1 ){
		return true;
	}

	if( arr[i] > arr[i+1]){
		return false;
	}

	return isArraySortedRecursive(arr,i+1,n);


}


int main(){
	// int arr[] = {2,3,1,0,-2,34};
	int arr[] = {-2,3,4,67,98,444};

	int  n = sizeof(arr)/sizeof(int);

	// // bubbleSort(arr,0,0,n);

	// // for(int i = 0 ; i < n ; i++){
	// // 	cout << arr[i] << " " ;
	// }

	// cout << binarySearch(arr,n,0,n-1,198) << endl;

	// cout<< isArraySorted(arr,n) << endl;

	cout<< isArraySortedRecursive(arr,0,n) << endl;

	return 0 ;
}