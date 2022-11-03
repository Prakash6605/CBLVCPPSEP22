// vector.cpp
#include<iostream>
#include<vector>
using namespace std;


//passing the vector
void print(vector<int> v){

	for(int i = 0 ; i < v.size() ; i++){
		cout << v[i] << " " ;
	}

	return;
}

// returning the vector

vector<int> get(vector<int> v){

	for(int i = 0 ; i < v.size() ; i++){
		v[i] = v[i] + 10;
	}

	return v;

}


// updating the vector
void update(vector<int>& v){

	for(int i = 0 ; i < v.size() ; i++){
		v[i] = v[i] + 10;
	}

}






int main(){


	// way 1 pushing values one by one
	// vector<int> v;

	// for(int i = 1 ; i <= 5 ; i++){
	// 	v.push_back(i);

	// 	cout << " size " << v.size() << " capacity " << v.capacity() << endl;
	// }

	// for(int i = 0 ; i < v.size() ; i++){
	// 	cout << v[i] << " ";
	// }

	// way 2 specifying size

	// vector<int> v1(5);

	// for(int i = 0 ; i < 5 ; i++){
	// 	// v1[i] = i + 1;
	// 	v1.push_back(i+1);
	// 	cout << " size " << v1.size() << " capacity " << v1.capacity() << endl;
	// }

	// for(int i = 0 ; i < 5 + 5  ; i++){
	// 	cout << v1[i] << " " ;
	// }

	// way 3 , specifying size + initial value

	// vector<int> v(5,1);

	// for(int i = 0 ; i < 5 ; i++){
	// 	cout << v[i] << " " ;
	// }

	// way 4 int arr[] = {1,2,3,4};

	// vector<int> v{1,2,3,4};
	// for(int i = 0 ; i < v.size() ; i++){
	// 	cout << v[i] << " " ;
	// }

	// way 5 from array

	// int arr[] = {1,2,3,4};
	// int n = sizeof(arr)/sizeof(arr[0]);

	// vector<int> v(arr,arr+n);

	// for(int i = 0 ; i < n ; i++){
	// 	cout << v[i] << " " ;
	// }

	// way 6 from vector
	// vector<int> v{1,2,3,4};

	// vector<int> v1(v.begin(),v.end());

	// for(int i = 0 ; i < v1.size() ; i++){
	// 	cout<<v1[i] << " " ;
	// }



	//sorting arrays directly

	int arr[] = {12,3,4,1,0};
	int n = 5;

	// sort(arr,arr+n);

	// for(int i = 0 ; i < n ; i++){
	// 	cout << arr[i] << " " ;
	// }


	// sorting of vector

	vector<int> v(arr,arr+n);

	sort(v.begin(),v.end());  // merge sort ( n log n)

	// for(int i = 0 ; i < v.size() ; i++){
	// 	cout << v[i] << " " ;
	// }

	update(v);

	print(v);












	return 0;
}