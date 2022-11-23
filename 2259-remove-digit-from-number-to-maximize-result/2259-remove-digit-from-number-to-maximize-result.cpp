class Solution {
public:
    string removeDigit(string n, char digit) {
        string a="";
        for(int i=n.size();i>=0;i--)
        {
            if(n[i]==digit){
               a=max(a,n.substr(0,i)+n.substr(i+1,n.size()-i+1));}
        }
        return a;
    }
};