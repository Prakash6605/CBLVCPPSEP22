#include<iostream>
// iostream -> 
using namespace std;

int main()
{

	int n ;
	bool isPrime = true;


	cout<<" Enter the number to be checked : ";
	cin >> n ; 


	int i = 2 ; 
	// n = 6
	while( i <= n-1 ){

		cout<< i << " " ;
		if( n % i == 0 ){
			isPrime = false;
			break;
		}

		i = i + 1 ;
	}

	if(isPrime == false){
		cout<<" Not a Prime number" << endl;
	}else{
		cout<<" Prime number " << endl;
	}

}