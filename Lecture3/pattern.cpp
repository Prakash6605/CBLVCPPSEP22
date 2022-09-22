#include<iostream>
using namespace std;


int main(){

	int n , no = 1 ;
	cin >> n ;
	int i = 1 ; 
	while( i <= n ){

		int j = 1;
		while( j <= i ){

			//work
			cout<<no<<" ";
			no = no + 1;
			j = j + 1; 
		}

		cout<< endl;

		i = i + 1;

	}

	return 0;
}