// insertionSort.cpp
#include<iostream>
using namespace std;

int main(){


	int n ; 
	cin >> n ;


	int arr[n];

	for(int i = 0 ; i < n; i++){
		cin >> arr[i] ;

	}


	// insertion sort

	for(int i = 1 ; i < n ; i++){


		int np = arr[i];

		int j ;
		for( j = i - 1 ; j>= 0 ; j--){
			if(arr[j] > np){
				arr[j+1] = arr[j];
			}else{
				break;
			}
		}
		arr[j+1] = np;
	}


	cout<<" Sorted Array is " << endl;
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i] << " " ;
	}

	cout<<endl;



	return 0;
}