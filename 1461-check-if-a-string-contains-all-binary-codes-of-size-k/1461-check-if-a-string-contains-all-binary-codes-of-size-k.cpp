class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> se;
        int n=1<<k;
        for(int i=k;i<=s.size();i++)
        {
            string t=s.substr(i-k,k);
            if(se.find(t)==se.end())
            {
                se.insert(t);
                n--;
            }
            if(n==0)
                return true;
        }
        
        return false;
        
    }
};