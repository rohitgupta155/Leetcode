class Solution {
public:
    long long minimumRemoval(vector<int>& b) {
        if(b.size()==1)
            return 0;
        sort(b.begin(),b.end());
        long long sum=LONG_MAX;
        vector<long long> r(b.size(),0),beans(b.begin(),b.end());
        r.back()=beans.back();
        for(int i=beans.size()-2;i>=0;i--)
        {
            r[i]+=beans[i]+r[i+1];
        }
        for(int i=1;i<beans.size();i++)
        {
            beans[i]+=beans[i-1];
        }
        for(int i=0;i<beans.size();i++)
        {
            if(i==0)
            {
                sum=min(sum,(long long)(r[i+1]-((int)beans.size()-1)*beans[i]));
            }
            else if(i==beans.size()-1)
            {
                sum=min(sum,(long long)beans[i-1]);
            }
            else{
                sum=min(sum,(long long)(beans[i-1]+r[i+1]-((int)beans.size()-i-1)*(beans[i]-beans[i-1])));
            }
        }
        
        
        return sum;
        
    }
};