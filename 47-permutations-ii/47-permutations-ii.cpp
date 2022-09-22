class Solution {
public:
    vector<vector<int>> a;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<vector<int>,int> c;
        permutation(nums,0,nums.size()-1,c);
        return a;
    }
    void permutation(vector<int>n,int l,int r,map<vector<int>,int> &c)
    {
        if(l==r)
           {if(!c.count(n)) 
            {a.push_back(n);
             c[n]++;}
           }
        else{
            for(int i=l;i<=r;i++)
            {
                swap(n[i],n[l]);
                permutation(n,l+1,r,c);
                swap(n[i],n[l]);
            }
        }
    }
};