class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long sum=0;
        vector<int> c(n,0);
        for(auto i:roads)
        {
            c[i[0]]++;
            c[i[1]]++;
        }
        sort(c.begin(),c.end());
        for(int i=n;i>0;i--)
        {
            sum+=i*1LL*c[i-1];
        }
        return sum;
        
    }
};