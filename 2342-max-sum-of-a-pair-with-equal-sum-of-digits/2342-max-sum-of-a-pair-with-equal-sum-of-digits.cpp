class Solution {
public:
    int sum(int i)
    {
        int s=0;
        while(i)
        {
            s+=i%10;
            i/=10;
        }
        return s;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans=-1;
        for(int i:nums)
        {
            int c=sum(i);
            if(m.count(c)){
                ans=max(ans,i+m[c]);
                if(i>m[c])
                    m[c]=i;}
            else{
                m[c]=i;
            }
        }
        return ans;
    }
};