class Solution {
public:
    string customSortString(string order, string s) {
        string ans;
        unordered_map<char,int> m;
        for(auto i:s)
            m[i]++;
        for(auto i:order)
        {
            if(m.count(i))
               { 
                while(m[i]--)ans+=i;
                m.erase(i);}
        }
        sort(s.begin(),s.end());
        for(auto i:s)
        {
            if(m.count(i))
               { 
                while(m[i]--)ans+=i;
                m.erase(i);}
        }
        
        return ans;
    }
};