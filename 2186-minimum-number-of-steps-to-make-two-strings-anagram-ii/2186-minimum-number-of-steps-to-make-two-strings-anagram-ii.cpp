class Solution {
public:
    int minSteps(string s, string t) {
        return min(s,t)+min(t,s);
    }
    int min(string s, string t) {
        unordered_map<int,int> m;
        for(auto i:s)
        {
            m[i]++;
        }
        int ans=0;
        for(auto i:t)
        {
            if(m.find(i)==m.end()) ans++;
            else{
                m[i]--;
                if(m[i]==0)
                    m.erase(i);
            }
        }
        return ans;
    }
};