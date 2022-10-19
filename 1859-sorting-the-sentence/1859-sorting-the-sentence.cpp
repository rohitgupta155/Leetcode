class Solution {
public:
    string sortSentence(string s) {
        vector<string> a;
        string b;
        for(auto i:s)
        {
           if(i==' ')
           {
               a.push_back(b);
               b="";
           }
            else b+=i;
        }
        a.push_back(b);
        sort(a.begin(),a.end(),[](const string& x, const string& y) -> bool
    {
        return x.back()<y.back();
    });
        s.clear();
        for(auto i:a)
        {
            s+=i;
            s.pop_back();
            s+=' ';
        }
        s.pop_back();
        return s;
    }
};