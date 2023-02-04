// https://leetcode.com/problems/design-add-and-search-words-data-structure/description/



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


class WordDictionary {
public:
    struct Node* root;
    WordDictionary() {
        root = getNode();
    }
    
    void addWord(string word) {
        insert(root,word);
    }
    
    bool searchHelper(string word , int pos , struct Node* p){
        
        if(p == NULL){
            return false;
        }
        
        if( pos == word.size()){
            return p->isEnd;
        }
        
        if(word[pos] == '.'){
            
            for(int i = 0 ; i < 26 ; i++){
                // if(p->chid;ren[i] == NULL)
                bool seahead = searchHelper(word,pos+1,p->children[i]);
                if(seahead == true)return true;
                
            }
            
        }else{
           int index = word[pos] - 'a';
            if(p->children[index] == NULL){
                return false;
            }
            return searchHelper(word,pos+1,p->children[index]);
        }
        
        return false;
        
    }
    
    bool search(string word) {
        return searchHelper(word,0,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */