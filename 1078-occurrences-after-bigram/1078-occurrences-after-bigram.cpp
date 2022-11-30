class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> t;
        string a="";
        for(auto i:text)
        {
            if(i==' ')
            {
                t.push_back(a);
                a="";
            }
            else a+=i;
        }
        if(a!="")
            t.push_back(a);
        vector<string> ans;
        for(int i=2;i<t.size();i++)
        {
            if(t[i-2]==first&&t[i-1]==second)
                ans.push_back(t[i]);
        }
        return ans;
    }
};