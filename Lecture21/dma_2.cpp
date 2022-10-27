// dma_2.cpp
#include <bits/stdc++.h>
using namespace std;


int main(){

	// int* iptr ;
	// float* fptr;

	// iptr = new int;

	// *iptr = 12;

	// fptr = new float;

	// *fptr = 12.23;

	// cout << *iptr << " " << *fptr << endl;

	// delete iptr;
	// delete fptr;

	// DMA for 1D array;

	// int n ; 
	// cin >> n ;

	// int* arr;

	// arr = new int[n];

	// for(int i = 0 ; i < n ; i++){
	// 	arr[i] = i + 1 ;
	// }

	// for(int i = 0 ; i < n ; i++){
	// 	cout << arr[i] << endl;
	// }

	// delete[] arr;

	// DMA for 2d arrays

	// int* arr;

	// arr = new int[n];

	int** arr;
	// allocate memory in heap area
	arr = new int*[10];

	//

	for(int i = 0 ; i < 10 ; i++){
		arr[i] = new int[5];
	}


	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0 ; j < 5 ; j++){
			arr[i][j] = 1;
			// cin >> arr[i][j];
		}
	}


	for(int i = 0 ; i < 10 ; i++){
		for(int j = 0 ; j < 5 ; j++){
			cout << arr[i][j] << " " ;
		}
		cout << endl;
	}

	// freeing space

	for(int i = 0 ; i < 10 ; i++){
		delete[] arr[i];
	}

	delete[] arr;








	return 0;
}