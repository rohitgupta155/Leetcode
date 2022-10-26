class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int p=0,i=0;
        string a="";
        while(s[i]!='\0')
        {
            if(p<spaces.size()&&spaces[p]==i){
                a+=" ";p++;}
            else {
                a+=s[i];
                i++;
            }
            
        }
        return a;
    }
};