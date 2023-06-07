class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if(s==target)
            return true;
        unordered_set<char> s1(s.begin(),s.end());
        unordered_set<char> t1(target.begin(),target.end());
        s=string(s1.begin(),s1.end());
        target=string(t1.begin(),t1.end());
        if(s.size()==1&&s[0]=='0'||target.size()==1&&target[0]=='0')
            return false;
        return true;
    }
};