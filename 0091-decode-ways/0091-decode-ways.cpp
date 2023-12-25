class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') return 0;
        int n = s.size();
        vector<int> dp(n + 1, 0);  // DP array to store the number of decodings

        // Base cases:
        dp[0] = 1;  // Empty string has 1 decoding
        dp[1] = s[0] != '0';  // Single digit string has 1 decoding if digit is non-zero

        // Build up the DP table:
        for (int i = 2; i <= n; i++) {
            int first = s[i - 1] - '0';
            int second = (s[i - 2] - '0') * 10 + first;

            if (first >= 1 && first <= 9) {
                dp[i] += dp[i - 1];  // Consider decoding the current digit alone
            }
            if (second >= 10 && second <= 26) {
                dp[i] += dp[i - 2];  // Consider decoding the two digits together
            }
        }

        return dp[n];  // Final result is stored in dp[n]
    }
};
