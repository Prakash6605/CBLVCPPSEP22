// pattern2.cpp

#include<iostream>
using namespace std;


int main(){

	int n;
	cin >> n ;


	for(int i = 1 ; i <= n ; i++){

			// pattern 1
		for(int j = 1 ; j <= i ; j++){
			cout<<"*";
		}

		cout<<" ";


			// pattern 2
		for(int j = 1 ; j <= n - i + 1 ; j++){
			cout<<"*";
		}

		cout<<" ";

			// pattern 3
		for(int j = 1 ; j <= n - i + 1 ; j++){
			cout<<"*";
		}

		cout<<" ";


			// pattern 4
		for(int j = 1 ; j <= i ; j++){
			cout<<"*";
		}

		cout<<endl;

	}

cout<<endl;

	for(int i = 1 ; i <= n ; i++){

			// pattern 1
		for(int j = 1 ; j <= i ; j++){
			cout<<"*";
		}

		cout<<" ";


			// pattern 2
		for(int j = 1 ; j <= n - i + 1 ; j++){
			cout<<"*";
		}

		cout<<" ";

			// pattern 3
		for(int j = 1 ; j <= n - i + 1 ; j++){
			cout<<"*";
		}

		cout<<" ";


			// pattern 4
		for(int j = 1 ; j <= i ; j++){
			cout<<"*";
		}

		cout<<endl;

	}



	return 0;
}