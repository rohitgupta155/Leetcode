class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int m=INT_MIN,sum=0;
        for(auto i:nums)
        m=max(m,i);
        unordered_map<int,int> a;
        for(auto i:nums)
            a[i]++;
        for(auto i:a)
            if(i.second==1)
                sum+=i.first;
        return sum;
    }
};