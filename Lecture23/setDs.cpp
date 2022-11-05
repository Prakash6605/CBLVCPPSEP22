// setDs.cpp
#include<bits/stdc++.h>
using namespace std;


int main(){

	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(1);



	cout << " size "  << s.size() << endl ; 

	cout << *(s.begin()) << endl;


	for(set<int>::iterator i = s.begin() ; i != s.end() ; i++){
		cout << *i << " " ;
	}





	// set<vector<int> > s;

	// vector<int> v ;
	// v.push_back(1);
	// v.push_back(2);


	// vector<int> v1 ;
	// v1.push_back(1);
	// v1.push_back(2);

	// s.insert(v);
	// s.insert(v1);


	// cout << " size " << s.size() << endl;

	


	return 0;
}