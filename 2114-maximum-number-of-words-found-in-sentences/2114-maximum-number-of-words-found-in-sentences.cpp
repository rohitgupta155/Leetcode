class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=0;
        for(auto i:sentences)
        {
            int c=1;
            for(auto j:i)
                if(j==' ')
                    c++;
            m=max(m,c);
        }
        return m;
    }
};