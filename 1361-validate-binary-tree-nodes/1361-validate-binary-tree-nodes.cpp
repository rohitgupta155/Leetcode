class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(leftChild[i])!=m.end()||m.find(rightChild[i])!=m.end())return false;
            if(leftChild[i]!=-1)
                m[leftChild[i]].push_back(i);  
            if(rightChild[i]!=-1)
                m[rightChild[i]].push_back(i);
        }
        int baap=0;
        for(int i=0;i<n;i++)
            if(m.find(i)==m.end())
                {baap=i;
                break;}
        queue<int> q;
        q.push(baap);
        vector<int> vis(n,0);
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            if(vis[curr])
                return false;
            vis[curr]=1;
            n--;
            if(rightChild[curr]!=-1)
            q.push(rightChild[curr]);
            if(leftChild[curr]!=-1)
            q.push(leftChild[curr]);
        }
        
        return n==0;
    }
};