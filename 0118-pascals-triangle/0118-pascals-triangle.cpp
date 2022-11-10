class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> a;
        for(int i=1;i<=n;i++)
        {
            int c=1;
            vector<int> b;
            for(int j=1;j<=i;j++)
            {
                b.push_back(c);
                c=c*(i-j)/j;
            }
            a.push_back(b);
        }
        return a;
    }
};