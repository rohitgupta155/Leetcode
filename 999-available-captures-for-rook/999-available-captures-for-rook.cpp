class Solution {
public:
    int numRookCaptures(vector<vector<char>>& b) {
        int i,j,c=0,found=0;
        for(i=0;i<8;i++)
        {    for(j=0;j<8;j++){
                if(b[i][j]=='R'){
                    found=1;
                    break;}}
         if(found)
         break;
        }
        for(int k=i-1;k>=0;k--)
        {
            if(b[k][j]=='p'){
                c++;
            break;
            }
            else if(b[k][j]=='B')
                break;
        }
        for(int k=i+1;k<8;k++)
        {
            if(b[k][j]=='p'){
                c++;
            break;
            }
            else if(b[k][j]=='B')
                break;
        }
        for(int k=j-1;k>=0;k--)
        {
            if(b[i][k]=='p'){
                c++;
            break;
            }
            else if(b[i][k]=='B')
                break;
        }
        for(int k=j+1;k<8;k++)
        {
            if(b[i][k]=='p'){
                c++;
            break;
            }
            else if(b[i][k]=='B')
                break;
        }
        return c;
    }
};