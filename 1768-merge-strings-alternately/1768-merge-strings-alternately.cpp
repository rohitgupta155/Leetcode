class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a;
        int i=0,j=0;
        while(i<word1.size()&&j<word2.size())
        {
            a+=word1[i++];
            a+=word2[j++];
        }
        if(i<word1.size())
        {
            while(i<word1.size())
            {
                            a+=word1[i++];
            }
        }
        if(j<word2.size())
        {
            while(j<word2.size())
            {
              a+=word2[j++];
            }
        }
        return a;
    }
};