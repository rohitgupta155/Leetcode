class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums)
            pq.push(i);
        long long ans=0;
        while(k>0)
        {
            ans+=pq.top();
            int a=pq.top();
            pq.pop();
            pq.push(ceil(a*1.0/3));
            k--;
        }
        return ans;
    }
};