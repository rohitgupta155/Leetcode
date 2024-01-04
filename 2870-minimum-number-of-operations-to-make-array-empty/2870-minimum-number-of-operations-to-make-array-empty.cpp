class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums)
            m[i]++;
        int ans=0;
        for(auto i:m)
        {
            if(i.second==1)
                return -1;
            if(i.second%3==0)
                ans+=i.second/3;
            else{
                if(i.second%3==1){
                    int temp=i.second;
                    temp-=4;
                    ans+=temp/3+2;
                    
                }else{
                     ans+=i.second/3+1;
                }
                   
            }
        }
        return ans;
    }
};