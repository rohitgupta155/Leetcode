class Solution {
public:
    int similarPairs(vector<string>& words) {
        int c=0;
        for(int i=0;i<words.size();i++)
        {
            set<char> s(words[i].begin(),words[i].end());
            for(int j=i+1;j<words.size();j++)
            {
                set<char> t(words[j].begin(),words[j].end());
                if(s==t)c++;
            }
        }
        return c;
    }
};