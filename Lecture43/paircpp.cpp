#include<bits/stdc++.h>
using namespace std;

int main(){

    pair<int , int > p ;

    p = {1,2};

    cout << "p.first " << p.first <<  " p.second " << p.second << endl;
    p = make_pair(11,21);

    cout << "p.first " << p.first <<  " p.second " << p.second << endl;

    pair<int,string> pis;

    pis = {1,"one"};

    cout << "pis.first " << pis.first <<  " pis.second " << pis.second << endl;


    vector<pair<int,int>> vp;

    for(int i = 0 ; i < 5 ; i++){
        vp.push_back({i,i});
    }

    for(int i = 0 ; i < 5 ; i++){
        cout << vp[i].first << " " << vp[i].second << endl;
    }


    pair<int,pair<int,int>> np = {1,{11,111}};

    cout << np.first << " " << np.second.first << " " << np.second.second << endl;





}