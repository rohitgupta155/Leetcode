class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        unordered_map<int,int> m;
        for(auto i:s)
        {
            m[i]++;
            if(2*m[i]>n+1)
                return "";
        }
        vector<pair<int,char>> v;
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        vector<char> a(n);
        int k=0;
        sort(v.rbegin(),v.rend());
        for(auto i:v)
        {
            while(m[i.second]>0)
            {
                a[k]=i.second;
                k+=2;
                m[i.second]--;
                if(k>=n)
                    k=1;
            }
        }
        string ans;
        for(auto i:a)
            ans+=i;
        return ans;
    }
};