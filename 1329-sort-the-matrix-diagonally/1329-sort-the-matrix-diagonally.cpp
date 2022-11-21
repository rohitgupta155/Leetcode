class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        if(mat.size()==1)
            return mat;
        if(mat.size()==2)
        {
            for(int i=0;i<mat[0].size()-1;i++)
                if(mat[1][i+1]<mat[0][i])
                    swap(mat[1][i+1],mat[0][i]);
            return mat;
        }
        vector<int> t;
        for(int i=mat.size()-2;i>=0;i--)
        {    
            int l=0,c=i;
            while(i<mat.size()&&l<mat[0].size())
            t.push_back(mat[i++][l++]);
            sort(t.begin(),t.end());
            i=c;
            l=0;
            int j=0;
            while(i<mat.size()&&l<mat[0].size())
            mat[i++][l++]=t[j++];
            t.clear();
            i=c;
        }
        for(int i=1;i<mat[0].size()-1;i++)
        {    
           int l=0,c=i;
            while(i<mat[0].size()&&l<mat.size())
            t.push_back(mat[l++][i++]);
            sort(t.begin(),t.end());
            i=c;
            l=0;
            int j=0;
            while(i<mat[0].size()&&l<mat.size())
            mat[l++][i++]=t[j++];
            t.clear();
            i=c;
        }
        return mat;
    }
};