class Solution {
public:
    int minimumCost(vector<int>& c) {
        int n=c.size(),s=0,i; 
        sort(c.begin(),c.end());
        for(i=n-1;i>=2;i-=3)
        {
            s+=(c[i]+c[i-1]);
        }
        if(i>=0)
        {
            while(i>=0)
            s+=c[i--];
        }
        return s;
    }
};