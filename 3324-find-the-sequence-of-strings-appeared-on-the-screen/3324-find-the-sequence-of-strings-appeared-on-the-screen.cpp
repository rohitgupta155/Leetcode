class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string curr="a";
        int i=0;
        while(i<target.size())
        {
            ans.push_back(curr);
            if(target[i]==curr[i]){
                curr+="a";
                i++;
            }
            else
                curr[i]++;
        }
        return ans;
    }
};