class Solution {
public:
    int longestConsecutive(vector<int>& s) {
        if(s.size()==0)
            return 0;
        set<int> t(s.begin(),s.end());
        s.clear();
        for(auto i:t)
            s.push_back(i);
        for(auto i:s)
            cout<<i<<" ";
        int c=1,ans=0,n=s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]-1)
                c++;
            else{
                ans=max(ans,c);
                c=1;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};