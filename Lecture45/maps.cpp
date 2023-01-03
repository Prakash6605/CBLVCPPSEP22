#include<bits/stdc++.h>
using namespace std;

int main(){

    // declaration 
    map<string , int > m;

    // first way of insertion 
    m.insert({"orange" , 150});
    m.insert({"apple" , 100});
    m.insert({"banana" , 50});

    m.insert(make_pair("ankit" , 29));

    // second way of insertion
    m["ram"] = 12;
    m["shayam"] = 13 ;


    // for finding key's in map

    if(m.find("key") == m.end()){
        cout << " key not present " << endl;
    }

    auto itr = m.find("orange");
    if( itr != m.end()){
        cout << (*itr).first<< " " << (*itr).second << endl;
        cout << " Key is Present " << endl;
    }


    // priniting the map
    for(auto itr = m.begin() ; itr != m.end() ; itr++){
        cout <<  (*itr).first << " ->  " << (*itr).second << endl;
    }

    // erasing element from map
    // synatx : m.erase(itr);

    m.erase(m.find("orange"));

    cout<<endl;

    for(auto itr = m.begin() ; itr != m.end() ; itr++){
        cout <<  (*itr).first << " ->  " << (*itr).second << endl;
    }




}