// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=0,mid,end=n,ans;
        while(low<=end)
        {
            mid=(end-low)/2+low;
            bool c=isBadVersion(mid);
        
            if(c==true)
               {ans=mid;
                end=mid-1;}
            if(c==false)
            {
                low=mid+1;
            }
        }
        return ans;
    }
};