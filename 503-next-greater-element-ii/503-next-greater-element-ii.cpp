class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         vector<int>ans;
        int i;
        for(i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                ans.push_back(nums[i]);
            else{
                int ma=-1,index=i-1;
                for(int j=i;j!=index;j++,j%=nums.size()){
                 if(nums[j]>nums[index])
                    { ma=nums[j];
                    break;}
                }
                ans.push_back(ma);
}
        }
        int index=nums.size()-1,ma=-1;
                for(int j=0;j<index;j++){
                 if(nums[j]>nums[index])
                    { ma=nums[j];
                    break;}}
                ans.push_back(ma);
        
        return ans;
    }
};