class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int j=0;
//         for(int i=m;i<m+n;i++)
//            nums1[i]=nums2[j++];
        
//         sort(nums1.begin(),nums1.end());
        
        int p=m+n-1,n1=m-1,n2=n-1;
        while(n1>=0&&n2>=0)
        {
            if(nums1[n1]>nums2[n2])
            {
                nums1[p--]=nums1[n1--];
            }
            else{
                nums1[p--]=nums2[n2--];
            }
        }
        if(n2>=0)
            while(n2>=0)
            {
                nums1[p--]=nums2[n2--];
            }
        
    }
};