class Solution {
public:
    int minimumLength(string s) {
        int l=0,r=s.size()-1;
        while(l<r&&s[l]==s[r])
        {
            char t=s[l];
            while(l<s.size()&&s[l]==t)
                l++;
            while(r>=0&&s[r]==t)
                r--;
        }
        return r<l?0:(r-l+1);
    }
};