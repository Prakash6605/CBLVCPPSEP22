// mergeSort.cpp
#include<bits/stdc++.h>
using namespace std;




void printArray(int c[] , int s , int e){

	for(int i = s ; i <= e ; i++){
		cout << c[i] << " ";
	}
	cout<< endl;

}


void merge(int c[] , int s , int e , int mid){

	// first I need to create two arrays out of array c from index s to e , partitoning from mid ;

	int lleft  = mid - s + 1 ;
	int lright = e - mid ;
	// a               b
	int left[lleft] , right[lright] ;

	for(int i = 0 ; i < lleft ; i++){
		left[i] = c[i+s];
	}

	for(int i = 0 ; i < lright ; i++){
		right[i] = c[mid+1+i];
	}


	int sleft = 0 , sright = 0 , k = s ;

	while( sleft < lleft && sright < lright){

		if(left[sleft] < right[sright]){
			c[k] = left[sleft];
			k++;sleft++;
		}else{
			c[k] = right[sright];
			k++;sright++;
		}
	}

	while( sleft < lleft){
		c[k] = left[sleft];
		k++;sleft++;
	}

	while( sright < lright){
		c[k] = right[sright];
		k++;sright++;
	}

	return;





}

void mergeSort(int c[] , int s , int e , char partName){

	// cout << partName << " : " ;
	// printArray(c,s,e);
	if( s < e ){

		int mid = s + ( e - s ) / 2 ;

		mergeSort(c , s , mid , 'L'); // left part

		mergeSort(c , mid + 1 , e  , 'R') ; // right part 

		merge( c , s , e , mid );

	}

}


int main(){

	int c[] = {8,5,7,6,2,1,3,5};
	int n = sizeof(c)/sizeof(int);

	int s = 0 , e = n - 1 ;
	mergeSort(c , s , e , 'S');

	printArray(c,s,e);

}
