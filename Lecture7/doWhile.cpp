// doWhile.cpp
#include<iostream>
using namespace std;

int main(){

	for(int i = -1 ; i >= 0 ; i--){
		cout<<" for Hello World "<< endl;
	}



	int i = -1 ; 

	do{
		cout<<" do while Hello World " << endl;
		i--;
	}while( i >= 0 );


	return 0;
}