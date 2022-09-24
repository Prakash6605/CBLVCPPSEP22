
#include<iostream>
using namespace std;


int main(){


	char ch;

    cin >> ch ;


    if( ch >= 65 && ch <= 90){
        cout<<" UpperCase \n" ;
    }
    else if( ch >= 97 && ch <= 122){
        cout<<" LowerCase \n";
    }


    if( ch >= 'A' && ch <= 'Z'){
        cout<<"UpperCase \n";
    }
    else if( ch >= 'a' && ch <= 'z'){
        cout<<"LowerCase \n";
    }

	return 0;
}