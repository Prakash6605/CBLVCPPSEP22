#include<iostream>
#include<climits>
// iostream -> 
using namespace std;

int main()
{
	int n , curNo , largest = INT_MIN , smallest = INT_MAX;//(-2^31)
	cin >> n ;

	int i = 1;

	while( i <= n ){
		cin >> curNo;

		if(curNo > largest){
			largest = curNo;
		}
		if( curNo < smallest ){
			smallest = curNo;
		}
		i = i + 1 ;

	}

	cout<<" Largest : " << largest << " " <<  "Smallest : " << smallest <<endl;
}