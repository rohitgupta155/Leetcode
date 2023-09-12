class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        vector<int> a(26,0);
        for(auto i:s)
            a[i-'a']++;
        
        unordered_set<int> f;
        sort(a.begin(),a.end());
            
        for(auto i:a)
        {
            if(i==0)
                continue;
           int count=i;
            if(f.find(i)!=f.end())
            {
                while(count>0&&f.find(count)!=f.end()){
                    count--;
                    ans++;
                }
            }
            if(count)
            f.insert(count);
        }
        return ans;
        
    }
};