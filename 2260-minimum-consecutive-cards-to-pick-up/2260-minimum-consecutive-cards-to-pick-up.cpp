class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,vector<int>>m;
        int j=0,ans=INT_MAX;
        for(int i:cards)
        {
            m[i].push_back(j++);
        }
        for(auto i:m)
        {
            if(i.second.size()==2)
                ans=min(ans,i.second[1]-i.second[0]+1);
            else{
                ans=min(ans,minimum(i.second));
            }
        }
        return ans!=INT_MAX?ans:-1;
    }
    int minimum(vector<int> v)
    {
        int d=INT_MAX-1;
        for(int i=1;i<v.size();i++)
            d=min(d,v[i]-v[i-1]);
        return d+1;
    }
};