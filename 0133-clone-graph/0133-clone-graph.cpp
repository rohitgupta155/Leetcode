/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<int,vector<int>> m;
    unordered_set<int> s;
    Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        if(node->neighbors.size()==0)
            return new Node(1);
        find(node);
        vector<Node*> v(m.size());
        for(int i=0;i<m.size();i++)
            v[i]=new Node(i+1);
        for(auto i:m)
        {
            for(auto j:i.second)
            {
                v[i.first-1]->neighbors.push_back(v[j-1]);
            }
        }
        return v[node->val-1];
    }
void find(Node* node)
{
    if(!node||s.find(node->val)!=s.end())
        return;
    s.insert(node->val);
    for(auto i:node->neighbors)
        {m[node->val].push_back(i->val); 
        find(i);}    
}
};