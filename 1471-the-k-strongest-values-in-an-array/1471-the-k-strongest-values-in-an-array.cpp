class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int m=arr[(arr.size()-1)/2];
        int i=0,j=arr.size()-1;
        vector<int> ans;
        int s=0;
        while(i<=j)
        {
            s++;
            if(abs(arr[i]-m)>abs(arr[j]-m))
                ans.push_back(arr[i++]);
            else ans.push_back(arr[j--]);
            if(s==k)
                return ans;
        }
        return ans;
    }
};