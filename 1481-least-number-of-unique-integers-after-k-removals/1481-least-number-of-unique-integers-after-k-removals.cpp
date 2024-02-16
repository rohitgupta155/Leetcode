class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for(auto i:arr)
            m[i]++;
        priority_queue<int,vector<int>,greater<int>> p;
        for(auto i:m)
            p.push(i.second);
        while(k>0)
        {
            if(p.top()<=k)
            {
                k-=p.top();
                p.pop();
            }
            else break;
        }
        return p.size();
    }
};