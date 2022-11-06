class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int st=0,c=1,i;
        vector<vector<int>> ans;
        for(i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                c++;
            else if(c>=3){
                ans.push_back({st,i-1});
                c=1;
                st=i;
            }
            else c=1,st=i;
        }
        if(c>=3)
        {
            ans.push_back({st,i-1});
        }
        return ans;
    }
};