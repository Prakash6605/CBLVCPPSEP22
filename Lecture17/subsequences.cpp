// subsequences.cpp
#include <bits/stdc++.h>
using namespace std;

void printSubsequences(string str , int index , string subseq){

	// base case

	if(index == str.size()){

		cout << subseq << " " << subseq.length() << endl;
		return;
	}

	// recursive cases

		// option 1 : either to pick the current element (str[index])

		printSubsequences(str,index+1,subseq+str[index]);

		// option 2 : not to pick the current element

		printSubsequences(str,index+1,subseq);
}


int main(){

	string str = "abc";

	printSubsequences(str,0,"");


	return 0;
}