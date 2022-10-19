class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x=0;
        int n=nums2.size()%2,m=nums1.size()%2;
        if(n)for(int i=0;i<nums1.size();i++)
        {
                x^=nums1[i];
        }
        if(m)
        for(int i=0;i<nums2.size();i++)
        {
                x^=nums2[i];
        }
        return x;
    }
};