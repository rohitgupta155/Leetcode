class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n=a.size();
        int total=n*(n+1)/2,sum=0;
        for(int i=0;i<n;i++)
        sum+=a[i];
        return total-sum;
    }
};