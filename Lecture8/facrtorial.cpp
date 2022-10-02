// facrtorial.cpp
// ternaryOperator.cpp
#include<iostream>
using namespace std;


int factorial(int n){

	int f = 1 ; 

	for(int i = 1 ; i <= n ; i++){
		f = f * i ;
		// f *= i;
	}

	//int temp = function();

	return f;
}


int main(){

	int n = 5;
	int r = 3 ;
	// int ans = factorial(n);

	int ans = factorial(n)/(factorial(r)*factorial(n-r));

	cout<<" combination answer is " << ans << endl;



	// cout<<" factorial of n is : " << ans << endl;

	return 0;
}



