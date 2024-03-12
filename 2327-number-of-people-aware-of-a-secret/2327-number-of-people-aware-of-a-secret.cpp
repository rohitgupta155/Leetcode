class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
         vector<int> known (n+forget, 0);
        known[1] = 1;
        
        for (int j = 1; j <= n; j ++) {
            for (int to = j+delay; to < j+forget; to ++) 
                known[to] = (known[to] + known[j]) % 1000000007;
            // print(known);
        }
        
        int ans = 0;
        for (int j = max(1, n-forget+1); j <= n; j ++)
            ans = (ans + known[j]) % 1000000007;
        
        return ans;
    }
    void print(vector<int> a)
    {
        for(auto i:a)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
};