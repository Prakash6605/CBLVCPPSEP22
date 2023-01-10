#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{

    public:

    map<T , vector<T>> adj_list;


    void addEdge(T src , T des){
        adj_list[src].push_back(des);
        adj_list[des].push_back(src);
    }


    void print(){
        for(auto i : adj_list){
            cout << i.first<< " -> " ;

            for(auto j : i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }


};

int main(){

    Graph<int> g;
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.print();
}