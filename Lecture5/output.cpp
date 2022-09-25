// output.cpp

#include<iostream>
using namespace std;




int i = 5 ; //global variable
int main(){


	// int a = 10 , i = 1 ; 

	// if( i >= 1 ){

	// 	int a = 5 ;
		
	// 	a++;

	// 	cout<< a << endl;
	// }

	// cout<<a << endl;


	int i = 0 ;

	if(++i){
		i++;
	}

	cout<<i<< endl;

	cout<< ::i << endl;


}