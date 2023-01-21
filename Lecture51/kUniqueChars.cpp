//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string str, int k) {
    // your code here
    map<char,int> m;
    int s = 0 , e = 0 , ans = 0 ;
    
    while( e < str.size() ){
      m[str[e]]++;
      
      if(m.size() > k ){
          
          while(m.size() > k ){
              m[str[s]]--;
              if(m[str[s]] == 0 ){
                  m.erase(m.find(str[s]));
                  
              }
              s++;
          }
          
      }
      ans = max(ans, e - s + 1);
      e++;
    }
    
    if( ans < k || m.size() < k ){
        ans = -1;
    }
    
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends