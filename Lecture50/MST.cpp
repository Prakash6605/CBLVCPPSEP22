#include<bits/stdc++.h>
using namespace std;

int findParent(int src , vector<int> parent){

    if( src == parent[src]){
        return src;
    }

    return findParent(parent[src],parent);

}

void print(vector<int>& parent){

    for(int i = 0 ; i < parent.size() ; i++){
        cout<< i << "-> " << parent[i] << endl;
    }
    return;
}

bool disjointSet(vector<pair<int,int>> edge_list, vector<int>& parent , int n){


    int e = edge_list.size();

    for(int i = 0 ; i < e ; i++){

        int u = edge_list[i].first;
        int v = edge_list[i].second;

        cout << " edge " << u << " -- " << v << endl;

        int pu = findParent(u,parent);
        int pv = findParent(v,parent);

        cout<< " pu " << pu << " pv " <<pv << endl;

        //if parent are different then we perform union else we know cycle exists

        if( pu == pv ){
            return true;
        }else{
            // union
            parent[pu] = pv;
            // parent[pv] = pu ;
            print(parent);
        }

    }

    return false;

}

int MST(vector<pair<int,pair<char,char>>> edge_list , vector<int>& parent , int n){

    int finalCost = 0 ;
    for(int i = 0 ; i < edge_list.size() ; i++){

        int cost = edge_list[i].first;
        int u = edge_list[i].second.first - 'a';
        int v = edge_list[i].second.second - 'a';

        int pu = findParent(u,parent);
        int pv = findParent(v,parent);

        if(pu == pv ){
            // extra edge
            continue;
        }else{
            parent[pu] = pv ;
            finalCost += cost;
        }

    }
    return finalCost;

}


int main(){

    int n = 6 ;
    vector<int> parent(n);

    for(int i = 0 ; i < n ; i++){
        parent[i] = i ;
    }

    // parent[0] = 0 ;
    // parent[1] = 1;
    // parent[2] = 4;
    // parent[3] = 4 ;
    // parent[4] = 1;

    // creating edge list

    vector<pair<int,pair<char,char>>> edge_list;
    // {cost,{u,v}}

    edge_list.push_back({2,{'a','b'}});
    edge_list.push_back({5,{'e','f'}});
    edge_list.push_back({5,{'b','d'}});
     edge_list.push_back({3,{'a','c'}});
    edge_list.push_back({4,{'d','e'}});
    edge_list.push_back({6,{'c','d'}});

    sort(edge_list.begin() , edge_list.end());


//    bool cycle =  disjointSet(edge_list,parent,n);

    int ans = MST(edge_list,parent,n);

    cout << " ans " << ans << endl;

//    if(cycle == true){
//     cout << " Cycle is Present " << endl;

//    }else{
//     cout << " No Cycle " << endl;
//    }

    // int ans = findParent(3,parent);


    return 0;
}