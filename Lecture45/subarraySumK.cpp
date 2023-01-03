

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         
         int n = nums.size();

         unordered_map<int,int> m ; 
         m[0] = 1 ;

         int cur_sum = 0 , ans = 0 ;

         for(int i = 0 ; i < n ; i++){

             cur_sum += nums[i];

             // b find
             int b = cur_sum - k ;

             if(m.find(b) != m.end()){
                 ans = ans + m[b];
             }

             m[cur_sum]++;

         }

         return ans;

    }
};