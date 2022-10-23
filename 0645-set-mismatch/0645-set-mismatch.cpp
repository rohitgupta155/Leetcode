class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> a;
        int n=nums.size();
        int map[n+1];
        memset(map,0,sizeof(map));
        for(int i=0;i<n;i++)
        {
            map[nums[i]]++;
            if(map[nums[i]]>1)
                a.push_back(nums[i]);
        }
        for(int i=1;i<=n;i++)
            if(map[i]==0)
                a.push_back(i);
        return a;
    
    }
};