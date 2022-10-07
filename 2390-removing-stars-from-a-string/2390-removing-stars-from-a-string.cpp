class Solution {
public:
    string removeStars(string s) {
        string a;
        for(char i:s)
            if(!a.empty()&&i=='*')
                a.pop_back();
        else if(i!='*')a+=i;
       return a;
    }
};