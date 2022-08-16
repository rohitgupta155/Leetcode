class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<9;i++)
        { 
            map<char,int> r,c;
            int row=0,col=0;
            for(int j=0;j<9;j++){
                if(b[i][col]!='.')
                    {r[b[i][col]]++;
                if(r[b[i][col]]>1)
                    return false;}
                if(b[row][i]!='.')
                {c[b[row][i]]++;
                if(c[b[row][i]]>1)
                    return false;
                }
                row++;
                col++;                
            }
            
        }
     for(int i=0;i<9;i+=3)
        { 
            for(int j=0;j<9;j+=3){
                if(check(b,i,j)==false)
                return false;
            }
        }
        return true;
    }
    
    bool check(vector<vector<char>> b,int r,int c)
    {
        map<char,int> m;
        for(int i=r;i<r+3;i++)
        {
          for(int j=c;j<c+3;j++)
              if(b[i][j]!='.'){
              m[b[i][j]]++;
              if(m[b[i][j]]>1)
                  return false;}
        }
            return true;
    }
};