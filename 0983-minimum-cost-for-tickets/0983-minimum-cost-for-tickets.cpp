class Solution {
public:
    vector<int> d;
    vector<int> c,m;
    int dur[3]={1,7,30};
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        d=days;
        c=costs;
        m.resize(days.size());
        return dp(0);
    }
    int dp(int i) {
        if (i >= d.size())
            return 0;
        if (m[i] !=NULL)
            return m[i];

        int ans = INT_MAX;
        int j = i;
        for (int k = 0; k < 3; ++k) {
            while (j < d.size() && d[j] < d[i] + dur[k])
                j++;
            ans = min(ans, dp(j) + c[k]);
        }

        m[i] = ans;
        return ans;
    }
};