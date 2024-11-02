class Solution {
public:
    bool isCircularSentence(string s) {
        vector<string> words;
        string a;
        for(auto i:s)
        {
            if(i==' ')
            {
                words.push_back(a);
                a="";
            }
            else
                a+=i;
        }
        words.push_back(a);
        for(int i=1;i<words.size();i++)
        {
            if(words[i][0]!=words[i-1].back())
                return false;
        }
        return words[0][0]==words.back().back();
    }
};