// countCharacters.cpp

#include<iostream>
using namespace std;

int main()
{

	char ch;
	// cin >> ch ;

	ch = cin.get();

	int count  = 1 ; 

	while(ch != '$'){

		count++;
		// cin >> ch ;
		ch = cin.get();

	}

	cout<< count -  1 << endl;


	return 0;
}