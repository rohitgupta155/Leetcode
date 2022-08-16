class Solution {
public:
    bool checkValid(vector<vector<int>>& b) {
        int n=b.size(),m=b[0].size();
        for(int i=0;i<n;i++)
        { 
            map<char,int> r,c;
            int row=0,col=0;
            for(int j=0;j<m;j++){
                    {r[b[i][col]]++;
                if(r[b[i][col]]>1)
                    return false;}
                {c[b[row][i]]++;
                if(c[b[row][i]]>1)
                    return false;
                }
                row++;
                col++;                
            }
            
        }
        return true;
        
    }
};