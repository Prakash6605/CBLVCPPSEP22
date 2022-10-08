// append.cpp
#include <iostream>
using namespace std;

int length(char* ch){
	int i = 0 ;

	for(i = 0 ; ch[i] != '\0' ; i++){}

	return i;	
}

void append(char* a , char* b){

	int lena = length(a);

	int j = lena;
	int i = 0 ;

	while(b[i] != '\0'){
		a[j] = b[i];
		j++;
		i++;
	}

	a[j] = '\0';


}


int main(){

	char a[100] = "coding";
	char b[] = "blocks";


	append(a,b);

	cout<<a << endl;

	return 0;
}