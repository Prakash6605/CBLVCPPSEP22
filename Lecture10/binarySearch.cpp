// binarySearch.cpp
#include<iostream>
using namespace std;

int main()
{
	/* code */
	int arr[] = {2,3,4,7,90,456};

	cout<<sizeof(arr)<<endl;
	cout<<sizeof(int);
	int n = sizeof(arr)/sizeof(int);


	int s = 0 , e = n - 1 ;

	int ns = 3;

	bool found = false;
	while( s <= e ){
		int mid = s + ( e - s )/2 ;

		if(arr[mid] < ns){
			s = mid + 1 ;
		}else if(arr[mid] > ns ){
			e = mid - 1 ;
		}else{
			found = true;
			cout<<" found at position : " << mid << endl;
			break;
			
		}
	}

	if(!found){

		cout<<" Not found " << endl;

	}



	return 0;
}