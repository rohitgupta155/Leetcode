class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()>=needle.size())
        for(int i=0;i<=haystack.size()-needle.size();i++)
            if(needle==haystack.substr(i,needle.size()))
                return i;
        return -1;
    }
};