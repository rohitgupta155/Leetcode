class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        for(char i:s)
            if(!a.empty()&&i==a.back())
                a.pop_back();
        else a+=i;
        return a;
        
    }
};