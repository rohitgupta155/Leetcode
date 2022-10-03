class Solution {
public:
    int minCost(string c, vector<int>& t) {
        int n=t.size(),sum=0;
        for(int i=0;i<n-1;i++)
        {
            if(c[i]==c[i+1])
               { if(t[i]<t[i+1]){
                    sum+=t[i];
                }
            else{
                sum+=t[i+1];
                t[i+1]=t[i];
            }}
        }
        return sum;
    }
};