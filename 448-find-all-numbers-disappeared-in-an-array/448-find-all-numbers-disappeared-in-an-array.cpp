class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        int a[n+1];
        for(int i=0;i<=n;i++)
            a[i]=0;
        for(int i=0;i<n;i++)
            a[nums[i]]++;
        nums.clear();
        for(int i=1;i<=n;i++)
            if(a[i]==0)
                nums.push_back(i);
        return nums;
    }
};