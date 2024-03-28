class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0,curr=0,j=0,i;
        unordered_map<int,int> m;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]<=k)
                curr=max(curr,m[nums[i]]);
            else
            {
                                // cout<<j<<" "<<i<<"->";

                ans=max(ans,i-j);
                m[nums[i]]--;
                
                while(j<i&&nums[j]!=nums[i])
                {
                    m[nums[j]]--;
                    j++;
                }
                j++;
                                // cout<<j<<" "<<i<<endl;

            }
        }
        //                cout<<j<<" "<<i<<endl<<endl;

        ans=max(ans,i-j);
        return ans;
    }
};