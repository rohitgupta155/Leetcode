bool cmp(vector<int>& a,vector<int>& b)
{
    return a[1]>b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int t) {
        int ans=0;
        sort(b.begin(),b.end(),&cmp);
        for(auto i:b){
           if(t-i[0]>=0){
               t-=i[0];
               ans+=i[1]*i[0];}
            else if(t>0) {
                ans+=t*i[1];
                break;
            }
        }
        return ans;
    }
};