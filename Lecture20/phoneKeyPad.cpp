// phoneKeyPad.cpp

#include<bits/stdc++.h>
using namespace std;
				// 0  , 1.  , 2  ,   3  , 4.  , 5  , 6 
string keypad[] = {"" , "" , "ABC","DEF","GHI","JKL","MNO","PORS","TUV","WXYZ"};


void printCombination(string str, int i, string tempCombination){



	// base case
	if( tempCombination.length() == str.length()){
		cout << tempCombination << " ";
		return ;
	}

	for(int j = 0 ; j < keypad[str[i]-'0'].length() ; j++){

		printCombination(str,i+1,tempCombination+keypad[str[i]-'0'][j]);

	}


}


int main(){

	string str = "678";

	printCombination(str,0,"");


}
