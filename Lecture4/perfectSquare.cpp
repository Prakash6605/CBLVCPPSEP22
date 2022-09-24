#include<iostream>
using namespace std;

int main(){


	int total_precision , initial_precision = 0 , n ;
	double inc = 1 ;

	cout<< " Enter total_precision :";
	cin >> total_precision ;

	cout<<"\n Enter the number : " ;
	cin >> n ;


	double i = 1 ; 

	while(initial_precision <= total_precision){


		while( i * i <= n ){
			 i = i + inc;
		}

		// i  = 6 , i = i - (inc);
		i = i - inc ;

		inc = inc/10 ; // 1 , 0.1 , 0.01 , 0.001

		initial_precision = initial_precision + 1 ;
	}

	cout<< i << endl;


	return 0;
}