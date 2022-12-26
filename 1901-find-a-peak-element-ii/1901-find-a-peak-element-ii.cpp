class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<int> ans;
        int mid,l=0,r=m-1,index;
        while(l<=r)
        {
            mid=(l+r)/2;
            int max=INT_MIN;
            for(int i=0;i<n;i++)
            {
                if(max<mat[i][mid])
                    max=mat[i][mid],index=i;
            }
            // cout<<max<<index<<endl;
if((mid-1)>=0&&(mid+1)<m&&mat[index][mid]>mat[index][mid-1]&&mat[index][mid]>mat[index][mid+1])
              return {index,mid};
            else if((mid-1)<0&&mat[index][mid]>mat[index][mid+1])
                 return {index,mid};
                else if((mid+1)>=m&&mat[index][mid]>mat[index][mid-1])
                 return {index,mid};
             if(mat[index][mid]>mat[index][mid+1])
                r=mid;
            else l=mid+1;
        }
        return {index,mid};
    }
};