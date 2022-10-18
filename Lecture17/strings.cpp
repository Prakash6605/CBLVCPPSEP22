// strings.cpp
#include<iostream>
#include <string>
using namespace std;



int main()
{
	string str = "hello";
	string str1 = "world";

	// length

	// int n = str.size();
	// int n1 = str1.size();

	// cout << " n " << n  << " n1 " << n1 << endl;

	int n = str.length();
	int n1 = str1.length();

	cout << " n " << n  << " n1 " << n1 << endl;


	// iterate

	for(int i = 0 ; i < str.length() ; i++){
		cout<< str[i] << " " ;
	}
	cout<<endl;

	// append

	string appendedString  = str + str1 ;

	cout<<" appendedString " << appendedString << endl;

	string appendedString1 = str.append(str1);

	cout<< " appendedString1 " << appendedString1 << endl;


	// str1 - str2 , hello - hell = o
	string empty = "";


	string s = "";

	s = s + '0';
	s = s + '1';

	cout<<" s : " << s << endl;

	















	return 0;
}