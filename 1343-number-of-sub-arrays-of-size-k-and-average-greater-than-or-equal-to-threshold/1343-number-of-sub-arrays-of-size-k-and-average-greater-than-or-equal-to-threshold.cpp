class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int s=0;
        for(int i=0;i<k;i++)
            s+=arr[i];
        int ans=0;
        if(s>=k*t) ans++;
        for(int i=k;i<arr.size();i++)
        {
            s-=(arr[i-k]-arr[i]);
            if(s>=k*t) ans++;
        }
        return ans;
    }
};