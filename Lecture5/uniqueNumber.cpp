// uniqueNumber.cpp

#include<iostream>
using namespace std;


int main(){

	int n , no , ans = 0 ;
	cin >> n ;


	for(int i = 1 ; i <= n ; i++){

		cin >> no ;

		// ans = ans ^ no ;

		ans ^= no ; // shorthand

	}


	cout<<" Unique Number is : " << ans << endl;



	return 0;
}