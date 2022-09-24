// celciusToFahre.cpp

#include<iostream>
using namespace std;


int main(){


	//user input -> inital value , final value , step value

	int initial_value , final_value , step;

	cin>>initial_value>>final_value>>step;


	//data type ?

	float celsius = 0.0 ;

	while( initial_value <= final_value ){


		// work
		celsius = (5/9)*(initial_value - 32);


		cout<<initial_value<< "   " << celsius << endl;



		initial_value = initial_value + step ;
	}


	return 0;
}