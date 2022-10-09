// reverseString.cpp
#include<iostream>
using namespace std;


int length(char* ch){
	int i = 0 ;

	for(i = 0 ; ch[i] != '\0' ; i++){}

	return i;	
}

int main()
{
	/* code */
	char ch[] = "MADAM";

	int i = 0 , j = length(ch) - 1 ;


	while( i < j ){

		swap(ch[i],ch[j]);
		i++;
		j--;
	}


	cout<< ch << endl;


	return 0;
}