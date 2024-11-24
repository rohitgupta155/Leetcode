class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans=0;
        int m=INT_MAX,n=0,z=0;
        for(auto i:matrix){
            for(auto j:i){
                if(j<0)
                    n++;
                else if(j==0)
                    z++;
                m=min(m,abs(j));
                ans+=abs(j);
            }
        }
        if(z||n%2==0)
            return ans;
        return ans-2*m;
    }
};