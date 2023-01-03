#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);

        unordered_map<int,int> m;

        for(int i = 0 ; i < nums.size() ; i++){
            m[nums[i]] = i ;
        }

        for(int i = 0 ; i < nums.size() ; i++){

            int a = nums[i];
            int c = target;

            int b = c - a ;

            if( m.find(b) != m.end() && m[b] != i ){

                ans[0] = i ;
                ans[1] = m[b];

                break;

            }

        }

        return ans;
    }
};