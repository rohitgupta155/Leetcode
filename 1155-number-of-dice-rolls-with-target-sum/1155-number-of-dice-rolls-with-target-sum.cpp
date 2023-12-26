class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
         vector<int> dp(target + 1);
        dp[0] = 1;
        
        for (int d = 1; d <= n; d++) {
            vector<int> cur(target + 1);
            
            for (int f = 1; f <= k; f++) {
                for (auto s = f; s <= target; ++s) {
                    cur[s] = (cur[s] + dp[s - f]) % 1000000007;
                }
            }
            
            swap(cur, dp);
        }
        return dp[target];
    }
};