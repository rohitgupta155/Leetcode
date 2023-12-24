class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1)
            return 5;
        int dp[n][5];
        dp[n-1][0]=dp[n-1][1]=dp[n-1][2]=dp[n-1][3]=dp[n-1][4]=1; //base data for bottom row
        for(int i=0;i<n;i++)  //base data for right most column
            dp[i][4]=1;
        for(int i=n-2;i>=0;i--)
        {
            for(int j=3;j>=0;j--)
            {
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
            }
        }
        return accumulate(dp[0],dp[0]+5,0);
    }
};