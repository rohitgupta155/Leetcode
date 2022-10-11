class Solution {
public:
    long long minimalKSum(vector<int>& arr, int k) {
        set<int>m(arr.begin(),arr.end());
        long long sum=(long long)k*(k+1)/2;
        for(auto i:m)
        {
            if(i<=k)
            {
                k++;
                sum-=(i-k);
                
            }
        }
        return sum;
    }
};