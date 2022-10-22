// permutation.cpp
#include <bits/stdc++.h>
using namespace std;

void printPermutation(string str , bool visited[] , int n , string newPermutation){

	// Base case

	if(newPermutation.length() == n ){
		cout << newPermutation << endl;
		return;
	}

	// recursive case
	for(int i = 0 ; i < n ; i++){

		if(visited[i] == false ){

			visited[i] = true ; // in future calls , this particular ele is not picked again
			
			printPermutation(str,visited,n,newPermutation+str[i]);
			
			visited[i] = false;
		}

	}

	return;
}



int main(){

	string str = "123";
	
	int n = str.length();

	bool visited[n];
	for(int i = 0 ; i < n ; i++){
		visited[i] = false;
	}
	
	// int n = sizeof(arr)/sizeof(int);

	string newPermutation = "";

	printPermutation(str,visited,n ,newPermutation);


	return 0;
}