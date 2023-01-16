class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> m;
        for(int i=0;i<26;i++)
            m[order[i]]=i;
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(j>=words[i+1].size())
                    return false;
                if(words[i][j]!=words[i+1][j])
                    {if(m[words[i][j]]>m[words[i+1][j]])
                        return false;
                else break;}
            }
        }
        return true;
    }
};