// buyAndSellStock.cpp
#include<iostream>
using namespace std;


int main(){


	int n ; 

	cin >> n ;

	int arr[n] ;

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}

	int max_profit = INT_MIN , max_profit_ith_day = INT_MIN;
	for(int i = 0 ; i < n - 1 ; i++){
		max_profit_ith_day = INT_MIN ;	
		for(int j = i + 1 ; j < n ; j++){
			// max_profit_ith_day = max(max_profit_ith_day,(arr[j] - arr[i]));
			// max_profit_ith_day = (max_profit_ith_day > (arr[j]-arr[i])) ? max_profit_ith_day : (arr[j]-arr[i]);
			if(max_profit_ith_day < (arr[j]-arr[i])){
				max_profit_ith_day = (arr[j]-arr[i]);
			}
		}
		cout<<" Maximum profit at " << i << "th day is : " << max_profit_ith_day << endl; 
		max_profit = max(max_profit,max_profit_ith_day);
	}


	cout<<" max_profit : " << max_profit << endl;



	// optimized version

	max_profit = INT_MIN ;
	int  minPriceOfStock = INT_MAX;

	minPriceOfStock = arr[0];

	for(int i = 1 ; i < n ; i++){
		max_profit = (max_profit < (arr[i]-minPriceOfStock)) ? (arr[i]-minPriceOfStock) : max_profit;

		minPriceOfStock = min(minPriceOfStock,arr[i]);
	}

	cout<<" Maximum profit earned : " << max_profit << endl;


	return 0;
}