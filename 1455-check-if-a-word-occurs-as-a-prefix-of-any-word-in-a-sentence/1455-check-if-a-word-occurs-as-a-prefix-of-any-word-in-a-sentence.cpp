class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int j=1;
        string a="";
        for(auto i:sentence)
        {
            if(i==' ')
            {
                if(check(a,searchWord))
                    return j;
                a="";
                j++;
            }
            else a+=i;
        }
        if(check(a,searchWord))
                    return j;
        return -1;
    }
    bool check(string a,string s)
    {
        a=a.substr(0,s.size());
        return s==a;
    }
};