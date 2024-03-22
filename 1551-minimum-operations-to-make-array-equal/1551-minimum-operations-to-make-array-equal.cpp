class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        for(int i=(n%2?(n+2):(n+1));i<=2*(n-1)+1;i+=2)
        {    ans+=i-n;
         }
        return ans;
    }
};