// selectionSort.cpp
#include<iostream>
using namespace std;
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


void selectionSort(int arr[] , int i , int n){


	if( i == n - 1 ){
		return ;
	}


	// we use to find the min value for the ith index , from the remaining array ( i + 1 , n );

	int pos = i ;

	for(int j = i + 1 ; j < n ; j++){
		if(arr[j] < arr[pos]){
			pos = j ;
		}
	}

	swap(arr[pos],arr[i]);


	selectionSort(arr,i+1,n);

}





int main(){


	int arr[] = {3,1,34,12,0};
	int n = sizeof(arr)/sizeof(int);

	selectionSort(arr,0,n);

	printArrayForward(arr,0,n);


	return 0;
}