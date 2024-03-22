class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
     for(int i=1;i<arr.size();i++)
         arr[i]=arr[i]^arr[i-1];
    vector<int> ans;
        for(auto i:queries)
        {
            if(i[0]==0)
                ans.push_back(arr[i[1]]);
            else
            ans.push_back(arr[i[1]]^arr[i[0]-1]);
        }
        return ans;
    }
};