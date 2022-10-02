// modifiedBubbleSort.cpp


#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n ;

	// int ns ; 
	// cin >> ns ; 

	int arr[n];

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ;
	}

	// int ns ; 
	// cin >> ns ; 


	// soring bubble sort
	bool swapped = false;
	for(int j = 0 ; j < n - 1  ; j++){

		cout<<" Time " << j+1 << endl;

		swapped = false;
		for(int i = 0 ; i < n - 1 - j ; i++){
			if(arr[i] > arr[i + 1]){
				swapped = true;
				swap(arr[i],arr[i+1]);
			}
		}
		if(swapped == false){
			break;
		}
	}

	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<< " " ;
	}

	cout<<endl;
}