class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(char i:word)
            if(i<='Z')
                c++;
        return c==0||c==word.size()||(c==1&&word[0]<='Z');
    }
};