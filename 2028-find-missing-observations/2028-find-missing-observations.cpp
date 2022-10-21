class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int s=accumulate(rolls.begin(),rolls.end(),0);
        int total=mean*(n+rolls.size())-s;
        if(total<n||6*n<total)
        return {};
        vector<int> ans(n,1);
        total -= n;
        for (int i = 0; i < n; ++i) {
            int add = min(5,total);
            ans[i] += add;
            total -= add;
        }
        return ans;
        
    }
};