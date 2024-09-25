struct node{
    char l;
    int c=0;
    unordered_map<char,node*> nexts;
    node():l('a'){}
    node(char x):l(x){}
    };
class Trie {
public:
    node *root;
    Trie() {
        node *r=new node();
        root=r;
    }
    
    void insert(string word) {
        node *temp=root;
        for(auto i:word)
        {
         if(!temp->nexts[i])
             temp->nexts[i]=new node(i);
            temp=temp->nexts[i];
            temp->c+=1;

        }
    }
    
    
    int startsWith(string prefix) {
        node *temp=root;
        int a=0;
        for(auto i:prefix)
        {
            temp=temp->nexts[i];
            a+=temp->c;
        }
        return a;
    }
};
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        Trie *obj=new Trie();
        for(auto i:words)
        {
            obj->insert(i);
        }
        vector<int> ans;
        for(auto i:words)
        {
            int count=0;
            count+=obj->startsWith(i);
            ans.push_back(count);
        }
        return ans;
    }
};