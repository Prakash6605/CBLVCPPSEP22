// searchIn2DArray.cpp

#include<iostream>
using namespace std;

int main(){


	int r , c , ns;

	cin >> r >> c ;

	int arr[r][c] ;

	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			cin >> arr[i][j] ;
		}
	}

	cout<<" Enter the Number to be searched :";
	cin >> ns ;

	bool present = false;
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++){
			if( arr[i][j] == ns ){
				present = true;
				break;
			}
		}
	}

	cout<< (present ? "Present" : "Not Present") << endl;

	
	return 0;
}