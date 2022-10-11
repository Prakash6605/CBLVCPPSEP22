// wavePrint.cpp
// twoDimensionalArray.cpp

#include<iostream>
using namespace std;

int main(){

	int arr[][3] = {{1,2,3},
					{4,5,6},
					{7,8,9},
					{10,11,12}};

	int start , end , inc , row = 4 , col = 4;
	for(int c = 0 ; c < 3 ; c++){

		if( c%2 == 0){
			for(int r = 0 ; r < row ; r++){
				cout<<arr[r][c] << " ";
			}
		}else{
			for(int r = row - 1 ; r >= 0 ; r--){
				cout<<arr[r][c] << " ";
			}
		}
	}

	return 0;
}