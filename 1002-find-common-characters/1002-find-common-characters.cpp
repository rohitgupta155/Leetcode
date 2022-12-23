class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,vector<int>> m;
        for(auto i:words)
        {
            unordered_map<char,int> c;
            for(auto j:i)
                c[j]++;
            for(auto k:c)
                m[k.first].push_back(k.second);
            
        }
        vector<string> ans;
        int n=words.size();
        for(auto i:m)
        {
            if(i.second.size()==n)
            {
                int ma=*min_element(i.second.begin(),i.second.end());
                while(ma--)
               { string a;
                a+=i.first;
                ans.push_back(a);}
            }
        }
        return ans;
    }
};