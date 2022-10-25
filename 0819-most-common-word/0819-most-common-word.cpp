class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> m;
        string a="",ans;
        for(auto i:paragraph)
        {
            if((i>='a'&&i<='z')||(i>='A'&&i<='Z'))
               a+=tolower(i);
               else 
               {
                   if(a!="")
                   m[a]++;
                   a="";
               } 
        }
        if(a!="")
        m[a]++;
        for(auto i:banned)
            m.erase(i);
        int max=INT_MIN;
        for(auto i:m)
        {
            if(i.second>max)
            {
                max=i.second;
                ans=i.first;
            }
        }
        return ans;       
    }
};