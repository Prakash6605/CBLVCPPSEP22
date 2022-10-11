// twoDimensionalArray.cpp

#include<iostream>
using namespace std;

int main(){

	int arr[][3] = {{1,2,3},{4,5,6}};

	// cout<< arr[1][1] << endl;


	// cout<< arr << endl;

	// cout<< arr[0] << endl;

	// cout<< &arr[0][0] << endl;

	// // address + 1 -> 100 + 1 -> 104
	// cout<< arr[1][1] << " " << *(arr[1] + 1) << endl;

	// arr[1][1] => 1 arrays => 2nd 1d array ke 2 element ko access krna hai


	char ch[][4] = {{'A','B','C'},{'D','E','F'},{'H','I','J'}};

	cout<< ch[0] << endl;
	cout<< ch[1] << endl;
	cout<< ch[2] << endl;


	return 0;
}