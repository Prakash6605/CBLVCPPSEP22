#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n ;

    vector<pair<int,int>> vp;
    int data;
    for(int i = 0 ; i < n ; i++){
        cin >> data ;
        vp.push_back({data,i});
    }

    sort(vp.begin(),vp.end());

    for(int i = 0 ; i < n ; i++){
        cout << " data " << vp[i].first << " initial pos " << vp[i].second << " final pos " << i <<endl;
    }

}