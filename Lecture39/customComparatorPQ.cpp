#include<bits/stdc++.h>
using namespace std;

class data{
public:
    int val;
    int arrayNo;
    int pos;

};

struct Compare{
    bool operator()(const data& a , const data& b){

        if( a.val > b.val ){
            return true;
        }else{
            return false;
        }

    }
};


int main(){

    priority_queue<data , vector<data> , Compare > pq;

    data d1 , d2 , d3 , d4 ,d5 ;
    d1.val = 10;d1.arrayNo = 0 ,d1.pos = 0;
    d2.val = 2;d2.arrayNo = 1 ,d2.pos = 0;
    d3.val = 30;d3.arrayNo = 2 ,d3.pos = 0;
    d4.val = 1;d4.arrayNo = 3 ,d4.pos = 0;
    d5.val = -1;d5.arrayNo = 4 ,d5.pos = 0;


    pq.push(d1);
    pq.push(d2);
    pq.push(d3);
    pq.push(d4);
    pq.push(d5);


    while(!pq.empty()){
        data cur = pq.top();

        cout << cur.val << " " << cur.arrayNo << " " << cur.pos << endl;

        pq.pop();
    }
    


}