class Solution {
public:
    int dominantIndex(vector<int>& m) {
        int max=-1,maxi=-1;
        int n=m.size();
        for(int i=0;i<n;i++)
        {
            if(m[i]>max){
                max=m[i];
                maxi=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(max!=m[i]&&max<2*m[i])
                return -1;
        }
        return maxi;
    }
};