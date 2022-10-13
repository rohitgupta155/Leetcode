class Solution {
public:
    int trailingZeroes(int n) {
        n/=5;
        int ans = n;
        while(n >= 5){ 
            n = n / 5;
            ans = ans + n;
        }
        return ans;  
    }
};