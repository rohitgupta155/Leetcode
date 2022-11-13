class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        string b="";
        for(auto i:s)
        {
            if(i==' ')
            {
                if(b!="")
                    {a.push_back(b);
                b="";}
            }
            else b+=i;
        }
        if(b!="")
        a.push_back(b);
    reverse(a.begin(),a.end());
        s.clear();
        for(auto i:a)
        s+=i+" ";
        s.pop_back();
        return s;
    }
};