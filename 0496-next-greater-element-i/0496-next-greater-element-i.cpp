class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int> m;
        m[nums2.back()]=-1;
        int maa=nums2.back();
        for(int i=nums2.size()-2;i>=0;i--)
        {   
            if(nums2[i]<nums2[i+1])
            {
                m[nums2[i]]=nums2[i+1];
            }
            else if(nums2[i]==maa)
                m[nums2[i]]=-1;
            else{
                int ma=-1;
                for(int j=i+1;j<nums2.size();j++){
                 if(nums2[j]>nums2[i])
                    { ma=nums2[j];
                    break;}
                }
                m[nums2[i]]=ma;
            }
        }
        nums2.clear();
        for(int i:nums1)
            nums2.push_back(m[i]);
        return nums2;
    }
};