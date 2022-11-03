// vector1.cpp
#include<bits/stdc++.h>
using namespace std;

class MyVector{

public:
	int *arr;
	int cs;
	int mx;

	// constructor
	MyVector(int max_size = 2){
		cs = 0 ;
		mx = max_size;
		arr = new int[mx];
	}

	// push_back

	void push_back(int data){
		// when cs < ms
		// arr[cs] = data;
		// cs++;

		// cs == ms
			// i need to create a memory block of double size
			// copy old values into newly created memory block
			// delete the old array(smaller sized block)
		if( cs == mx ){
			int *oldArr = arr;
			int oldmx = mx;

			arr = new int[mx*2];
			mx = 2 * mx ;

			for(int i = 0 ; i < oldmx ; i++){
				arr[i] = oldArr[i];
			}

			delete[] oldArr;

		}

		arr[cs] = data;
		cs++;

	}

	// pop_back

	void pop_back(){
		if( cs > 0 )
			cs--;
	}

	// size
	int size(){
		return cs;
	}

	// capacity
	int capacity(){
		return mx;
	}

	// overload operator []
	int operator [] (int index){

		return arr[index];

	}

};




int main(){


	// vector<char> vc;

	MyVector v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	cout << v.size() << " " << v.capacity() << endl;

	// cout << v[0] << " " ;

	for(int i = 0 ; i < v.size() ; i++){
		cout << v[i] << " " ;
	}







	return 0;
}