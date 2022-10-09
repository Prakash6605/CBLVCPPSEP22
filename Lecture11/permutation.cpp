// permutation of string or not 

// char str1[] = "abc";
// char str2[] = "bca";  abc -> bca , abc -> aec(false)
// 

// 1234 -> 3421 -> (22341)
// length of str2 should be equal to str1 len
// abcd -> abcd -> (aabc)

// frequecy bucket/array for str1 and str2 
// fre arary , will store the freq of each character
// str1 = "abcde";
// eng me kitne alphabates hote hai ? -> 26 
// array use kr skta hu -> 26 , array[26]
// array[0] = 'a' = 
// array[1] = 'b' = 
// ARRAY[2] = 'c' = 
//
//
// array[25] = 'z' = 

// koi bhi eek character aye -> 
// str = a b c d e
// i = 0 , char = a , freqArray[str[i]-'a'] = freqArray['a'-'a'] = freqArray[0]
// i = 1 , char = b , freqArray[b-'a'] = freqArray[99-98] = freqArray[1]
// i = 2 . char = c , freqArray[c-'a'] = freArray[100-98] = freqArray[2] 

// aab
// i = 0 , freq[0] = 1
// i = 1 , freq[0] = 2;
// i = 2 , freq[1] = 1;

#include<iostream>
using namespace std;

void createFrequencyArray(int freq[] , char* ch){

	for(int i = 0 ; ch[i]!='\0' ; i++){
		freq[ch[i] - 'a']++;
	}
	return;
}

int main(){

	char str1[100] = "aab";
	char str2[100] = "aba";
	int freq[26] = {0};
	int freq1[26] = {0};

	// for(int i = 0 ; ch[i]!= '\0' ; i++){
	// 	freq[ch[i]-'a']++;
	// }

	createFrequencyArray(freq,str1);

	// for(int i = 0 ; i < 26 ; i++){
	// 	cout<< (char)('a' + i) << " occurs : " << freq[i]<< " " ;
	// }

	createFrequencyArray(freq1,str2);

	bool isValidPermutation = true;
	for(int i = 0 ; i < 26 ; i++){
		if(freq[i] != freq1[i]){
			// cout<<" Not A valid Permutation ";
			isValidPermutation = false;
			break;
		}
	}

	cout<< (isValidPermutation ? "Valid Permutation" : "Not A Valid Permutation");

	// cout<<endl ;
	// cout<< endl;

	// for(int i = 0 ; i < 26 ; i++){
	// 	cout<< (char)('a' + i) << " occurs : " << freq1[i] << " " ;
	// }
	return 0;



























}