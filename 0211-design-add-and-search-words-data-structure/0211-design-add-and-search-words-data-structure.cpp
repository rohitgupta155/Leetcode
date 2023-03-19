struct node{
    char l;
    bool end=false;
    unordered_map<char,node*> nexts;
    node():l('*'){}
    node(char x):l(x){}
    };
class WordDictionary {
public:
    node *root;
    WordDictionary() {
        node *r=new node();
        root=r;
    }
    
    void addWord(string word) {
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
        return check(word,0,root);
    }
    bool check(string a,int i,node *temp)
    {
        for(;i<a.size();i++){
        if(a[i]=='.')
        {
            for(auto j:temp->nexts)
                if(j.second&&check(a,i+1,j.second))
                    return true;
             return false;
        }
            if(!temp->nexts[a[i]])
                return false;
            temp=temp->nexts[a[i]];
        }
        return temp->end;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */