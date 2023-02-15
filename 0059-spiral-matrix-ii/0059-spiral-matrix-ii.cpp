class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> ans(n,vector<int>(n,0));
        int i=0,j=0,r=0,c=1,v=1,t=0;
        while(t!=n*n)
        {
            if(ans[i][j]!=0)
            {
                i-=r;
                j-=c;
                change(r,c);
                i+=r;
                j+=c;
            }
            ans[i][j]=v;
            v++;
            i+=r,j+=c;
            if(i==n||j==n||i<0||j<0)
            {
                
                if(i==n)
                    i--;
                if(j==n)
                    j--;
                if(i<0)
                    i++;
                if(j<0)
                    j++;
                change(r,c);
                i+=r;
                j+=c;
            }
            t++;
        }
        return ans;
        
    }
    
    void change(int &i,int &j)
    {
        if(i==0&&j==1)
        {
            i=1;
            j=0;
        }
        else if(i==1&&j==0)
        {
            i=0;
            j=-1;
        }
        else if(i==0&&j==-1)
        {
            i=-1;
            j=0;
        }
        else{
            i=0;
            j=1;
        }
    }
};