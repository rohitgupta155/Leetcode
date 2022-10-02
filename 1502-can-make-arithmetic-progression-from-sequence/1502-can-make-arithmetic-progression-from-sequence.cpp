class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        for(int i=2;i<n;i++)
            if(a[i]-a[i-1]!=a[i-1]-a[i-2])
                return false;
        return true;
    }
};