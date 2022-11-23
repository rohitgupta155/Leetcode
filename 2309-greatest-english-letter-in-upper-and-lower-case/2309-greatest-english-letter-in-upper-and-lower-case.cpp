class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>u(s.begin(),s.end());
        for(char i='Z';i>='A';i--)
            if(u.find(i)!=u.end()&&u.find(i+32)!=u.end())
                return {i};
        return "";
    }
};