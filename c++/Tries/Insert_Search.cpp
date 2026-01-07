class TrieNode{
    public:
    TrieNode*child[26];
    bool flag;

    TrieNode(){
        flag=false; 
        for(int i=0;i<26;i++){
            child[i]=nullptr; // initialize all char with null;
        }
    }
};

class Trie {
public:
   TrieNode * root;
    Trie() {
      root= new TrieNode(); 
    }
    
    void insert(string word) {
     TrieNode*node= root;
     for(char ch:word){
        int idx=ch-'a'; 
        if(node->child[idx]==nullptr){
            node->child[idx]=new TrieNode; // create a node 
        }
        node=node->child[idx]; // append the char at the node 
     }
     node->flag= true;
    }
    
    bool search(string word) {
      TrieNode*node=root;
      for(char ch:word){
        int idx= ch -'a'; 
        if(node->child[idx]==nullptr) return false ;  // while searching if node of that char is not there then we sop searching at the point itself
        node= node->child[idx]; // similar to iterator i++ 
      }
      return node->flag;
    }
    
    bool startsWith(string prefix) {
         TrieNode*node=root;
      for(char ch: prefix){
        int idx= ch -'a'; 
        if(node->child[idx]==nullptr) return false ; 
        node= node->child[idx];
      }
      return true; // if the word completes the loop then it is having the startwith
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
