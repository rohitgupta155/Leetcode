struct node{
    char l;
    bool end=false;
    unordered_map<char,node*> nexts;
    node():l('a'){}
    node(char x):l(x){}
    };
class Trie {
public:
    unordered_map<string,int> m;
    node *root;
    Trie() {
        node *r=new node();
        root=r;
    }
    
    void insert(string word) {
        m[word]++;
        node *temp=root;
        for(auto i:word)
        {
         if(!temp->nexts[i])
             temp->nexts[i]=new node(i);
            temp=temp->nexts[i];
        }
        temp->end=true;
    }
    
    bool search(string word) {
        node *temp=root;
        for(auto i:word)
        {
         if(!temp->nexts[i])
             return false;
            temp=temp->nexts[i];
        }
        return temp->end;
    }
    
    bool startsWith(string prefix) {
         node *temp=root;
        for(auto i:prefix)
        {
         if(!temp->nexts[i])
             return false;
            temp=temp->nexts[i];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */