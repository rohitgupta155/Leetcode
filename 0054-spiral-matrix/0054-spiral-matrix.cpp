class Solution {
public:
    
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int> ans;
        int n=m.size()*m[0].size();
        int i=0,j=0,r=0,c=1;
        while(1)
        {
            ans.push_back(m[i][j]);
            i+=r,j+=c;
            if(i==m.size()||j==m[0].size()||i<0||j<0||m[i][j]==-101)
            {
                
                if(i==m.size())
                    i--;
                if(j==m[0].size())
                    j--;
                if(i<0)
                    i++;
                if(j<0)
                    j++;
                if(m[i][j]==-101)
                {
                    i-=r;
                    j-=c;
                }
                change(r,c);
                i+=r;
                j+=c;
            }
            m[i-r][j-c]=-101;
            if(ans.size()==n)
                break;
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