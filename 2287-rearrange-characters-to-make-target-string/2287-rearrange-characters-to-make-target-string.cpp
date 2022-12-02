class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int> m,n;
        for(auto i:s)
            m[i]++;
        for(auto i:target){
            if(!m.count(i))return 0;
           n[i]++;}
        int ans=INT_MAX;
        for(auto i:n)
        {
            if(m[i.first]<i.second)return 0;
            if(ans>m[i.first]/i.second)
                ans=m[i.first]/i.second;
        }
        return ans;
    }
};