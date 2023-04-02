class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(auto i:spells)
        {
            int n=potions.size(),l,r;
            for(l=0,r=n-1;l<=r;)
            {
                int m=(l+r)/2;
                
                long long t= (long long)i*(long long)potions[m];
                if(t>=success)
                {
                    r=m-1;
                }
                else
                    l=m+1;
            }
            if(r==n-1)
                ans.push_back(0);
            else
                ans.push_back(n-l);
        }
        return ans;
    }
};