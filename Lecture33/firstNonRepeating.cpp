#include<bits/stdc++.h>
using namespace std;

char findFirstNonRepeatingCharacter(string str){

    int freq[26] ;

    for(int i = 0 ; i < 26 ; i++){
        freq[i] = 0 ;
    }

    for(int i = 0 ; i < str.length() ; i++){
        freq[str[i]-'a']++;
    }

    // for(int i = 0 ; i < str.length() ; i++){
    //     if(freq[str[i]-'a'] == 1){
    //         return str[i];
    //     }
    // }
    queue<char> q;
    for(int i = 0 ; i < str.length() ; i++){
        q.push(str[i]);
    }

    while(true){
        char f = q.front();
        if(freq[f-'a'] == 1){
            return f;
        }
        q.pop();
    }

    return '#';
}

int main(){

    string str = "madam";

    char ans = findFirstNonRepeatingCharacter(str);

    cout << " ans : " << ans << endl;

}