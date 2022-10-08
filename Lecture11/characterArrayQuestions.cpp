// characterArrayQuestions.cpp
#include <iostream>
using namespace std;

int length(char* ch){
	int i = 0 ;

	for(i = 0 ; ch[i] != '\0' ; i++){}

	return i;	
}

bool palindrome(char* ch){

	int i = 0 ;
	int j = length(ch) - 1 ;

	while( i < j ){
		if(ch[i] != ch[j]){
			return false;
		}
		i++;
		j--;
	}

	return true;

}


int main(){


	// char ch[] = "madam";

	// cout<< length(ch) << endl;

	// if(palindrome(ch) == true){
	// 	cout<<"Palindrome"<< endl;
	// }else{
	// 	cout<<"Not a Palindrome" << endl;
	// }


	int n;
	char ch[100];


	cin >> n ;

	// cin.get();
	cin.ignore();

	cin.getline(ch,100);


	cout<<" N : " << n << endl;
	cout<<"Ch : " << ch << endl;























	return 0;
}