class Solution {
public:
    vector<int> getRow(int n) {
        if(n==0)
            return {1};
           long long int c=1;
            vector<int> b;
            for(int j=1;j<=n+1;j++)
            {
                b.push_back(c);
                c=c*(n+1-j)/j;
            }
            
        return b;
    }
};