// mergeSortedArray.cpp

#include <iostream>
using namespace std;


void printArray(int arr[] , int n){

	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return;
}

int main(){

	int a[7] = {2,3,4,6};
	int b[3] = {40,50,55};

	int n = 4 , m = 3 ;

	int i = n - 1 , j = m -1 , k = (n + m) - 1 ;


	while( i >= 0 && j >= 0){

		if(a[i] > b[j]){
			a[k] = a[i];
			k--;
			i--;
		}else{
			a[k] = b[j];
			k--;
			j--;
		}
	}

	while( j >= 0 ){
		a[k] = b[j];
		k--;j--;
	}

	printArray(a,n+m);


}