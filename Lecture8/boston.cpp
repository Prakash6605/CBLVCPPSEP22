#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;

   int cn = n ;
   int sumOfTheDigitsOfAllPrimeFactors = 0 ;
   

   for(int i = 2 ; i <= cn/2 ; i++){

       int count = 0;

       while( n% i == 0){
           n = n / i ;
           count++;
       }

        // cout<<" i " << i << " count " << count << endl;
       // find the sum of digits of i

       int sumOdDigitsOfI =  0 ;

       int ci = i ; 

       while( ci != 0 ){
           sumOdDigitsOfI = sumOdDigitsOfI + (ci%10);
           ci = ci / 10 ;
       }


       sumOfTheDigitsOfAllPrimeFactors += sumOdDigitsOfI*count;

    //    cout<<" sumOdDigitsOfI " << sumOdDigitsOfI << endl;

   }


   int sumOfDigitsOfN = 0 ;

   while(cn!=0){
       sumOfDigitsOfN += (cn%10);
       cn = cn/10;
   }

   if(sumOfDigitsOfN == sumOfTheDigitsOfAllPrimeFactors){
       cout<<"1"<<endl;
   }else{
       cout<<"0"<<endl;
   }


}
