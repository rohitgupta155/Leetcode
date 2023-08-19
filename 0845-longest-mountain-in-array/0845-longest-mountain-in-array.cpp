class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3)
            return 0;
        int ans=0, i=1;
        while(i<arr.size())
        {
            int upper=0,lower=0;
            while(i<arr.size()&&arr[i]==arr[i-1])
                i++;
            while(i<arr.size()&&arr[i]>arr[i-1])
                i++,upper++;
            while(i<arr.size()&&arr[i]<arr[i-1])
                i++,lower++;
            if(upper&&lower)
            ans=max(ans,lower+upper+1);
        }
        return ans;
    }
};