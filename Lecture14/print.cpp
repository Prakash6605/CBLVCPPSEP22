#include<iostream>
using namespace std;
void  print(int* arr,int n,int i=0){
    cout<< " Pos " << i <<  endl ; 
    // i = n 
    if(i==n-1){
        cout<<arr[i]; // arr[n] // arr[5]
        return;
    }
    cout<<arr[i]<<" ";
    print(arr,n,i+1);   
}
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    print(arr,n,0);
}