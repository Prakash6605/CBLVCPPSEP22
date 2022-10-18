// multiply.cpp
#include <iostream>
using namespace std;


int multiply(int a , int b){
	// base case
	if( b == 0 ){
		return 0;
	}

	return (a + multiply(a,b-1));
}

void multiplyUsingVoidFun(int a , int b , int& ans){

	if( b == 0 ){
		return;
	}

	ans = ans + a ;
	multiplyUsingVoidFun(a,b-1,ans);

}


int main(){

	int a = 4 , b = 4 ;

	// int ans = multiply(a,b);

	int ans = 0 ;

	multiplyUsingVoidFun(a,b,ans);

	cout << " ans " << ans << endl;

	return 0 ;
}