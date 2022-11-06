class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0;
        string a="";
        
        for(auto i:s)
        {
            if(i==' ')
            {
                c++;
            }
            a+=i;
            if(c>=k)
                break;
        }
        if(a.back()==' ')
            a.pop_back();
        return a;
    }
};