class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> s(nums.begin(),nums.end());
        while(k--)
        {
            int a=s.top();
            a++;
            s.pop();
            s.push(a);
        }
        long long int ans=1;
        while(!s.empty())
            {ans*=s.top();
             ans%=1000000007;
        s.pop();}
        return ans%1000000007;
    }
};