class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
    void mergesort(vector<int> &n,int l,int r)
    {
        if(l<r)
        {
            int m=(r-l)/2+l;
            mergesort(n,l,m);
            mergesort(n,m+1,r);
            merge(n,l,m,r);
        }
    }
    void merge(vector<int> &n,int l,int m,int r)
    {
        int i=l,j=m+1;
        vector<int> a;
        while(i<=m&&j<=r)
        {
            if(n[i]<n[j])
            {
                a.push_back(n[i]);
                i++;
            }
            else{
                a.push_back(n[j]);
                j++;
            }
        }
        if(i<=m)
        {
            while(i<=m)
            {
                a.push_back(n[i]);
                i++;
            }
        }
        if(j<=r)
        {
            while(j<=r)
            {
                a.push_back(n[j]);
                j++;
            
            }
        }
        int index=0;
        for(int k=l;k<=r;k++)
        {
            n[k]=a[index++];
        }
    }
};