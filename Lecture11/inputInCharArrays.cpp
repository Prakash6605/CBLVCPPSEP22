// inputInCharArrays.cpp
#include<iostream>
using namespace std;


void inputString(char* chArr ,int size , char delimiter='\n'){

	char ch;

	ch = cin.get();
	int i = 0 ; 
	// chArr[i] = ch;


	while( ch != delimiter && i < size - 1){
		chArr[i] = ch ;

		i++;

		ch = cin.get();
	}

	chArr[i] = '\0';

	return ;

}

int main(){

	// int n , m ;

	// cin >> n >> m ;

	// cout<<  n << " " <<  m  << endl;


	char ch[100];

	// cin >> ch ;

	inputString(ch,6);

	// cin.getline(ch,100);

	cout<< ch << endl;




	return 0;
}