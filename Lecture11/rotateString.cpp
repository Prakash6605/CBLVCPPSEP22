// rotateString.cpp
#include<iostream>
using namespace std;
int length(char* ch){
	int i = 0 ;

	for(i = 0 ; ch[i] != '\0' ; i++){}

	return i;	
}
int  main(){
	// n = 3 (5+3)
	// c o d c o d  i n g
	// 0 1 2 3 4 5  6   7 8 9
	int n = 13;
	// len = 6 , 6 , 12 , 
	char ch[100] = "coding";
	int len = length(ch);

	n = n % len ;

	for(int i = len - 1 ; i >= 0 ; i--){
		ch[i+n] = ch[i];
	}

	cout<<ch << endl;

	// i n g c o d '\0' n g 
	// 0 1 2 3 4 5 6 7 8
	// len = 6 

	for(int i = 0 ; i < n ; i++){
		ch[i] = ch[len+i];
	}
	// ch[0] = ch[6+0];
	// ch[1] = ch[6+1];
	// ch[2] = ch[6+2];

	cout<< ch << endl;

	//i n g c o d i n g

	// ch -> i n g c o d '\0'
	// len - 1 , len = '\0';
	ch[len] = '\0';

	cout<< ch << endl;

	// coding
	// n = 3 -> ingcod
	// n = 5 -> odingc
	// n = 6 -> coding
	// n = 7 -> gcodin -> 1
	// n = 8 -> ngcodi -> 2
	// n = 8 ;
	// n = n % len; = > 8 % 6 => 2
	// n = 14  = 14 % 6 = > 2



 	return 0 ;
}