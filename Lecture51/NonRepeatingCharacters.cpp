class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<char,int> m;
        int l = str.size();
        
        int s = 0 ; 
        int ans = 0 ;
        for(int e = 0 ; e < l ; e++){
            
            if(m.find(str[e]) == m.end()){
                m[str[e]] = e ;
            }else{
                int prev_pos = m[str[e]];
                
                if(prev_pos >= s){
                    s = prev_pos + 1;
                }
                
                m[str[e]] = e ;
            }
            
            ans = max(ans,e - s + 1);
            
        }
        return ans;
    }
};