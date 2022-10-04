class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int s=d,n=t.size();
        for(int i=0;i<n-1;i++)
        {
            s+=min(t[i+1]-t[i],d);
            
        }
        return s;
    }
};