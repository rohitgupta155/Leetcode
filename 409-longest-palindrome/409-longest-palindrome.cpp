class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>a;
        int l=0,p=0;
        for(auto i:s)
            a[i]++;
        for(auto i:a)
        {
                l+=((i.second/2)*2);
                p+=(i.second%2);       
        }
        if(p)
        return l+1;
        return l;
    }
};