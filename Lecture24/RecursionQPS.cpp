// https://leetcode.com/problems/combinations/
// https://leetcode.com/problems/subsets/
// https://leetcode.com/problems/generate-parentheses/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > res;
void helper(vector<int> candidates , int target , int pos , vector<int> comb){

	if(target == 0 ){
		res.push_back(comb);
		return;
	}


	if( pos == candidates.size()){
		return;
	}


	// option 1 pick
	comb.push_back(candidates[pos]);
	helper(candidates,target - candidates[pos] , pos + 1 , comb);
	comb.pop_back();
	// option 2 not pick

	helper(candidates , target , pos + 1 ,comb);

	return;


}


 vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {

 	int pos = 0 ;
 	vector<int> comb;
 	helper(candidates,target,pos,comb);
 	return res;
        
 }

int main(){

	int n;
	cin >> n ;

	vector<int> candidates(n);

	for(int i = 0 ; i < n ; i++){
		cin >> candidates[i];
	}


	vector<vector<int> > ans = combinationSum2(candidates,8);


	for(int i = 0; i < ans.size() ; i++){
		for(int j = 0 ; j < ans[i].size() ; j++){
			cout << ans[i][j] << " ";
		}
		cout<<endl;
	}

	return 0;

}