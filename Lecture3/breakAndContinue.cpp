#include<iostream>
// iostream -> 
using namespace std;

int main()
{

	// int i = 1 ; 
	// while( i <= 1 ){

	// 	int j = 1 ; 
	// 	while( j < 10){
	// 		cout<< j << " " ;
	// 		j = j + 1;
	// 		//j = 3
	// 		if( j > 2 ){
	// 			break;
	// 		}
	// 	}


	// 	cout<<" Inside Outer Loop " << endl;
	// 	i = i + 1 ;
	// }

	// cout<<" Exiting code " << endl;



	int i = 1 ; 

	while( i <= 10 ){
		
		cout<< i << " ";

		if( i == 5){
			continue;
		}

		cout<< i << " ";

		i = i + 1;
	}

	return 0;

}