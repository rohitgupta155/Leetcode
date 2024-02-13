class Solution {
public:
    bool is(string s)
    {
        int i=0,j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++,j--;
        }
        return true;        
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words)
            if(is(i))
                return i;
        return "";
    }
};