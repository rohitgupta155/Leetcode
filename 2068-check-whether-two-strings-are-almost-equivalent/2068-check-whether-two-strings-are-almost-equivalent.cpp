class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {  
        unordered_map<char,int> f,s;
        for(int i=0;i<word1.size();i++)
        {
            f[word1[i]]++;
            s[word2[i]]++;
        }
        int m=1;
        for(auto i:f){
            if(abs(i.second-s[i.first])>3)
                m=0;
        }

        for(auto i:s){
            if(abs(i.second-f[i.first])>3)
                m=0;
        }
        return m;
        
        
    }
};