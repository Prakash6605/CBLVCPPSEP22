#include<bits/stdc++.h>
using namespace std;

struct Node{
    struct Node* children[26];
    bool isEnd;
};

struct Node* getNode(){
    
    struct Node* newNode = new Node;
    newNode->isEnd = false;

    for(int i = 0 ; i < 26 ; i++){
        newNode->children[i] = NULL;
    }

    return newNode;
}

// insert
void insert(struct Node* root , string str){

    struct Node* p = root ;

    for(int i = 0 ; i < str.size() ; i++){
        int index = str[i]-'a';

        if(p->children[index] == NULL){
            p->children[index] = getNode();
        }
        p = p->children[index];
    }
    p->isEnd = true;

}

// search
bool search(struct Node* root , string key){

    struct Node* p = root;

    for(int i = 0 ; i < key.size() ; i++){

        int index = key[i] - 'a';

        if(p->children[index] == NULL){
            return false;
        }
        p = p->children[index];

    }

    return p->isEnd;

}



int main(){

    struct Node* root = getNode();

    insert(root,"aabcd");
    insert(root,"aab");
    insert(root,"ab");

    cout << search(root,"aab") << endl;
    cout << search(root,"apk") << endl;
    cout << search(root,"aabc") << endl;

}