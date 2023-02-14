class Solution {
public:
    vector<vector<int>> a;
    vector<vector<int>> permute(vector<int>& nums) {
        
        permutation(nums,0,nums.size()-1);
        return a;
    }
    void permutation(vector<int> &n,int l,int r)
    {
        if(l==r)
            a.push_back(n);
        else{
            for(int i=l;i<=r;i++)
            {
                swap(n[i],n[l]);
                permutation(n,l+1,r);
                swap(n[i],n[l]);
            }
        }
    }
};