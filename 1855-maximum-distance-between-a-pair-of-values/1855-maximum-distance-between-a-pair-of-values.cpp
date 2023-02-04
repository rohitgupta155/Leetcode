class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int m=0,i=0,j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]>nums2[j])
                i++;
            
            else{
                m=max(m,j-i);
                j++;
            }
        }
        return m;
    }
};