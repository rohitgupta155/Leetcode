class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> t(dist.size());
        for(int i=0;i<dist.size();i++){
            t[i]=dist[i]*1.0/speed[i];
        }
        sort(t.begin(),t.end());
        int ans=1;
        for(int i=1;i<t.size();i++)
        {
            if(t[i]-ans>0)
                ans++;
            else
                break;
        }
        return ans;
    }
};