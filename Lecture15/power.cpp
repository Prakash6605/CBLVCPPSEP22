// power.cpp
#include<iostream>
using namespace std;

int findPower(int x , int n){

	// base case
	if(n == 0 ){
		return 1;
	}

	//  recursive case
	int tempAns = x * findPower(x,n-1);

	return tempAns;
}

char words[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

char singleDimension[] = "oneD";

void printInWords(int n){

	// base case
	if( n == 0 ){
		return;
	}

	int chootaNumber = n / 10 ;

	int currentKam = n % 10 ;

	// cout << currentKam << " " ;

	printInWords(chootaNumber);


	cout << words[currentKam] << " " ;


}


int main(){

	int x = 6 , n = 3 ;


	// int ans = findPower(x,n);

	// cout<<" Ans : " <<  ans <<  endl;



	printInWords(2048);
	return 0;
}