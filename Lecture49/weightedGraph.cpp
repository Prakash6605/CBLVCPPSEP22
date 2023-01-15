#include<bits/stdc++.h>
using namespace std;

int main(){



    map<int,vector<pair<int,int>>> graph;

    graph[1].push_back({2,4});
    graph[1].push_back({5,11});
    graph[2].push_back({3,10});



    for(auto i : graph){
        int u = i.first;

        for(auto j : i.second){
            // j.first , j.second
            cout << j.first << " " << j.second << " | " ;
        }
        cout << endl;
    } 



}