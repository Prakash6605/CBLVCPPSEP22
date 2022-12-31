#include<bits/stdc++.h>
using namespace std;

class node{
public:
    string key;
    int data;
    node* next;

    node(string k , int d){
        key = k ;
        data = d ;
        next = NULL;
    }
};

class hashmap{
    void rehash(){
        node** old_bucket = bucket ;
        int old_size = ms;

        ms = ms * 2 ;

        bucket = new node*[ms];

        for(int i = 0 ; i < old_size ; i++){

            node* temp = old_bucket[i];

            while(temp){
                insert(temp->key,temp->data);
                temp = temp->next;
            }

            if(old_bucket[i]){
                delete old_bucket[i];
            }
        }
        delete []old_bucket;
    }
public:
    int ms , cs ;
    node** bucket ;

    hashmap(int max_size){
        ms = max_size;
        cs = 0 ;

        bucket = new node*[ms];
        for(int i = 0 ; i < ms ; i++){
            bucket[i] = NULL;
        }
    }

    int hash_function(string key){
        int ans = 0 ;
        int mult = 37 ;

        for(int i = 0 ; key[i] != '\0' ; i++){
            ans = ans + key[i] * mult ;

            ans = ans % ms ;

            mult = mult * 37 ;

            mult = mult % ms ;
        }

        return ans ;
    }


    void insert(string key , int data){
        int index = hash_function(key);

        node* temp = bucket[index];

        bool isAlreadyPresent = false;

        while(temp){
            if(temp->key == key){
                isAlreadyPresent = true;
                break;
            }
            temp = temp->next;
        }

        if(!isAlreadyPresent){

            node* new_node = new node(key,data);
            new_node->next = bucket[index];
            bucket[index] = new_node;
            cs++;

            // load factor
            float load_factor = cs / (1.0 * ms );
            if(load_factor > 0.7){
                // rehash();
            }
        }
    }

    void print(){

        for(int i = 0 ; i < ms ; i++){

            cout << i << " -> " ;

            node* temp = bucket[i];

            while(temp){
                cout << temp->key << " " << temp->data << "--" ;
                temp = temp->next;
            }

            cout<< endl;
        }
    }

    node* search(string key){

        int index = hash_function(key);

        node* temp = bucket[index];

        while(temp){
            if(temp->key == key){
                return temp;
            }
            temp = temp->next;
        }

        return NULL;
    }
};


int main(){


    hashmap h(5);

    h.insert("orange" , 150);
    h.insert("banana" , 50);
    h.insert("apple" , 70);

    h.print();


}