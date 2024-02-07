class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        int n=s.size();
        for(int i=0;i<n;i++)
            m[s[i]]++;
        vector<pair<int,char>> a;
        for(auto i:m)
            a.push_back(make_pair(i.second,i.first));
        sort(a.rbegin(),a.rend());
        string ans;
        for(auto i:a)
            while(i.first--)
            ans+=i.second;
        return ans;
        
        
    }
};