#include<bits/stdc++.h>
using namespace std;

int main(){

    // edge list
    vector<pair<int,int>> edge_list;

    edge_list.push_back({1,2});
    edge_list.push_back({2,5});
    edge_list.push_back({5,4});
    edge_list.push_back({4,3});
    edge_list.push_back({3,1});
    edge_list.push_back({2,4});


    // printing the edge_list

    for(auto i : edge_list){
        cout << "{" << i.first<< " - " <<  i.second << " } " << endl;
    }

    cout << " adj list rep " << endl;

    map<int,vector<int>> adj_list;
    for(auto i : edge_list){
        adj_list[i.first].push_back(i.second);
        adj_list[i.second].push_back(i.first);
    }

    for(auto i : adj_list){
        int parent = i.first;
        cout << parent << "-> " ;
        for(auto j : i.second){
            cout<< j << " " ;
        }
        cout<< endl ;
    }

    return 0;


}