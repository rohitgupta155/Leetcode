class Solution {
public:
    int maxUncrossedLines(vector<int>& text1, vector<int>& text2) {
        vector<vector<int>> m(text1.size()+1,vector<int>(text2.size()+1));
        for(int i=0;i<=text2.size();i++)
            m[0][i]=0;
        for(int i=0;i<=text1.size();i++)
            m[i][0]=0;
        for(int i=1;i<=text1.size();i++)
            for(int j=1;j<=text2.size();j++){
                if(text1[i-1]==text2[j-1])
                    m[i][j]=m[i-1][j-1]+1;
                else {
                    m[i][j]=max(m[i-1][j],m[i][j-1]);
                }
            }
        return m[text1.size()][text2.size()];
    }
};