// Patter.cpp
#include<iostream>
using namespace std;

int main(){

	int n ;
	cin >> n ;

	char ch ;
	// this loop gives me rows
	for(int i = 1 ; i <= n ; i++){

		// starting character is always 'A'
		ch = 'A';
		// pattern 1
		for(int j = 1 ; j <= n - i + 1 ; j++){
			cout<<ch;
			ch = ch + 1 ; 
		}//ABCDE

		ch = ch - 1;


		// pattern 2
		for(int j = 1 ; j <= n - i + 1 ; j++){
			cout<<ch;
			ch = ch - 1 ;
		}

		cout<<endl;
	}



	return 0;
}