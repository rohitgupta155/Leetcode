class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(i+2<s.size()&&s[i+2]=='#')
            {
                int a=stoi(s.substr(i,2));
                ans+=('a'+a-1);
                i+=2;
            }
            else {ans+=('a'+s[i]-'0'-1);}
            
                
        }
        return ans;
    }
};