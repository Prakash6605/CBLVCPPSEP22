// toh.cpp

#include<bits/stdc++.h>
using namespace std;

void toh(int n , char src , char des , char helper){

	if( n == 0 ){
		// base case
		return;
	}

	toh( n - 1 , src , helper , des );

	cout << "Transfering " << n << " plate from " << src << " to " << des << endl;

	toh( n - 1 , helper , des , src );
}


int main(){

	int n = 4 ;

	toh( n , 'A' , 'C' , 'B');

}