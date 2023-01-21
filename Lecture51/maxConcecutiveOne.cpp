class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();

        int cur_sum = 0 , ans = 0 ;

        for(int i = 0 ; i < n ; i++){

            if(nums[i] == 0){
                ans = max(ans,cur_sum);
                cur_sum = 0 ;
            }else{
                cur_sum += 1 ;
                ans = max(ans,cur_sum);
            }

        }
        return ans;
    }
};