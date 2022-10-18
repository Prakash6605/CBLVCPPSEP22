// subStrings.cpp

// strings.cpp
#include<iostream>
#include <string>
using namespace std;



int main()
{

	string str = "abcd";

	int n = str.size();

	for(int i = 0 ; i < n ; i++){

		string temp = "";

		for(int j = i ; j < n ; j++){

			temp = temp + str[j];

			cout << temp << endl;

		}
	}


	// char ch[][10] = {"one" , "two" , ..........}; // array of string , 2d array of characters
	string str[] = {"one","two","three"};
	

	return 0;
}