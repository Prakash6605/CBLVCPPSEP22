#include<iostream>
using namespace std;

int main()
{
	/* code */

	int n ; 
	cin >> n ; 

	int mask = 1 , setBitCount = 0 ;

	while( n != 0){

		if( (n & mask)  == 1 ){
			setBitCount++;
		}

		n = n >> 1 ;
	}

	cout<<"Total setBitCount : " << setBitCount << endl;
	return 0;
}