class Solution {
public:
    string makeGood(string s) {
        string a;
        bool change=true;
        while(change){
            change=false;
        for(int i=1;i<=s.size();i++)
        {
            if(s[i]==s[i-1]-32||s[i]==s[i-1]+32)
                {
                change=true;
            i++;}
            else a+=s[i-1];
        }
            s=a;
            a="";
        }
        return s;
    }
};