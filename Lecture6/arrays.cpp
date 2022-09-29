// arrays.cpp
#include<iostream>
using namespace std;

int main(){

	// int arr[3];

	// arr[0] = 1;
	// arr[1] = 2;
	// arr[2] = 6;


	// cout<<arr[0] << " " << arr[1] << " " << arr[2] << endl;


	// int arr1[3] = {1,2,3}; // 2 bucket
	
	// cout<<arr1[0] << " " << arr1[1] << " " << arr1[2] << endl;


	// int arr2[4] = {1,2}; // 2 bucket
	// cout<<arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << endl;



	// user input

	// int n , k ; 
	// cin >> n >> k;

	int n;
	cin >> n ;

	// int ns ; 
	// cin >> ns ; 

	int arr[n];

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ;
	}

	int ns ; 
	cin >> ns ; 


	// // soring bubble sort
	// for(int j = 0 ; j < n - 1  ; j++){
	// 	for(int i = 0 ; i < n - 1 ; i++){
	// 		if(arr[i] > arr[i + 1]){
	// 			swap(arr[i],arr[i+1]);
	// 		}
	// 	}
	// }


	// for(int i = 0 ; i < n - 1  ; i++){
	// 	int smallest_index = i ;
	// 	int position_to_fix = i ;

	// 	for(int j = smallest_index ; j < n ; j++){
	// 		if(arr[j] < arr[smallest_index]){
	// 			smallest_index = j ;
	// 		}
	// 	}

	// 	swap(arr[position_to_fix] , arr[smallest_index]);
	// }


	//search a number 
	int i ;
	for(i = 0 ; i < n ; i++){
		cout<<" i " << i << endl;

		if(arr[i] == ns ){
			break;
		}
	}

	cout<<" Outside the loop i " << i << endl;

	if( i == n )cout<<" Not Present " << endl;
	else cout<<" Present " << endl;


	for(int i = 0 ; i < n ; i++){
		cout<< arr[i] << " ";
	}

	// cout<<" The " << k << " smallest element is : " << arr[k-1] << endl;

	return 0;


}