class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
       int n=q.size();
        vector <int> ans;
        int s=sum(nums);
        for(int i=0;i<n;i++)
        {
            int temp=nums[q[i][1]];
            if(temp%2!=0)
                temp=0;
            nums[q[i][1]]+=q[i][0];
            if(nums[q[i][1]]%2==0)
            s=s-temp+nums[q[i][1]];
            else s=s-temp;
             ans.push_back(s);
        }
        return ans;
    }
    int sum(vector<int> nu)
    {
        int n=nu.size(),s=0;
        for(int i=0;i<n;i++)
        {
            if(nu[i]%2==0){
                s+=nu[i];
            }
        }
        return s;
    }
};