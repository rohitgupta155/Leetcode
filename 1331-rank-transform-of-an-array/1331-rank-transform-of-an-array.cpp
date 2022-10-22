class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> m;
        vector<int> ans=arr;
        sort(arr.begin(),arr.end());
        int j=1;
        for(int i:arr)
        {
            if(!m.count(i))
                m[i]=j++;
        }
        for(int i=0;i<ans.size();i++)
            ans[i]=m[ans[i]];
        return ans;
    }
    
};