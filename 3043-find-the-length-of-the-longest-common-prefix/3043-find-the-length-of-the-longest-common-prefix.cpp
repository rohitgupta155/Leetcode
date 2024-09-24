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
    
    int search(string word) {
        node *temp=root;
        int c=0;
        for(auto i:word)
        {
         if(!temp->nexts[i])
             return c;
            temp=temp->nexts[i];
            c++;
        }
        return c;
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie *A=new Trie();
        
        for(auto i:arr1)
        {
            string a=to_string(i);
            A->insert(a);
        }
        int ans=0;
            for(auto b:arr2)
            {
                string j=to_string(b);
               int c=A->search(j);
                ans=max(ans,c);
            }
        return ans;
    }
};