#include<iostream>
using namespace std;
#define PI 3.14+1
#define w while
#define o cout 

int main(){

// float ans = 2*PI*1;
// int i = 1 ; 
// w(i<10){
//     o<< i << " " ;
//     i = i + 1 ;
// }
// o<<" ans " << ans << endl;
// // cout<<a<<endl;



// int a = 1 ; 
// // int b = a++; // post increment

// int b = ++a;

// int c = a ;

// // a++ => ( a = a + 1 );

// cout<<" a : " << a <<endl;

// cout<<" b : " << b << endl;

// cout<<" c : " << c << endl;

// return 0;




for(int i = 1 ; i <= 10 ;){
    cout<<i<<" ";

    i = i + 1;
}

//print in reverse order
cout<<endl;
for(int i = 10 ; i >= 1 ; ){
    cout<<i<<" ";

    i = i - 1 ;
}

return 0;

}