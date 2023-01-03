class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int c=0;
        int n=s.size(),m=s[0].size();
        for(int i=0;i<m;i++)
            for(int j=1;j<n;j++)
            {
                if(s[j][i]<s[j-1][i]){
                    c++;
                break;}
            }
        return c;
    }
};