class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        long long sum=0,l=0;
        for(auto i:arr)
            sum+=i;
        if(sum%3!=0)
            return false;
        sum/=3;
        int n=arr.size(),c=0;
        for(int i=0;i<n;i++)
        {
            l+=arr[i];
            if(l==sum){
                c++;l=0;}
        }
        return c>2;
    }
};