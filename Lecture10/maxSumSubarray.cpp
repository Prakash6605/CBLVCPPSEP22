// maxSumSubarray.cpp -> kadanes Algorithm

#include<iostream>
using namespace std;


int main(){

	int arr[] = {-8,3,-2,1,4,-2};

	int n = 6 ;

	int curSum = 0 , ans = INT_MIN ;

	for(int i = 0 ; i < n ; i++){

		curSum += arr[i];

		ans = max(ans,curSum);

		if(curSum < 0 )curSum = 0 ;
	}

	cout<<" ans : " << ans << endl;


	return 0;
}