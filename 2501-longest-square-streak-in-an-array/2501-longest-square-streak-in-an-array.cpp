class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
      
        int l=0,ans=0;
        for(auto i:s)
        {
            long long t=i;
            if(t>317)
                break;
            for(int j=0;j<5;j++)
            {
                if(s.find(t)!=s.end())
                {
                    l++; 
                    t*=t;
                }
                else{
                    break;}
            }
            ans=max(ans,l);

            if(ans==5)
                return 5;
            l=0;
        }
        return ans>=2?ans:-1;
    }
};