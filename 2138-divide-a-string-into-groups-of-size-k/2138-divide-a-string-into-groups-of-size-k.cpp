class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string a="";
        vector<string> ans;
        for(auto i:s)
        {
            a+=i;
            if(a.size()==k)
                {ans.push_back(a);
                a="";}
        }
        if(a!="")
        {
            while(a.size()!=k)
            {
                a+=fill;
            }
            ans.push_back(a);
        }
        return ans;
    }
};