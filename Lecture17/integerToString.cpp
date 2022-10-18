// integerToString.cpp
// strings.cpp
#include<iostream>
#include <string>
using namespace std;



int main()
{
	int no = 1234;

	string ans  = "";

 // 0 -> false


	// while(true){

	// }
	while(no != 0){

		int last_digit = no % 10 ;

		// string building phase

		char last_digit_char = last_digit + '0' ;

		ans = last_digit_char + ans ;

		// break the no

		no = no / 10 ;

	}


	cout << " String conversion of no is : " << ans << endl;

	cout<< ans.length() << endl;



	// prebuilt function to convert int to string directly

	int n = 234;
	string str = to_string(n);

	cout << " str : " << str << endl;
	cout<< str.length() << endl;

	// converting string to integer

	int rev_no = stoi("345765");

	cout<< " rev_no : " << rev_no << endl;



	// to_string("1234")
	// stoi("1234")








	return 0;
}