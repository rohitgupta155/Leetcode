class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,max=INT_MIN;
        for(auto i:nums)
        {
            sum+=i;
            if(sum>max){
                max=sum;
            }
            if(sum<0)
                sum=0;
        }
        int min=INT_MAX;
        sum=0;
        for(auto i:nums)
        {
            sum+=i;
            if(sum<min){
                min=sum;
            }
            if(sum>0)
                sum=0;
        }
        if(max>abs(min))
        return max;    
        return abs(min);
    }
};