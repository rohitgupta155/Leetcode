class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int ma=arr.back();
        arr[arr.size()-1]=-1;
        for(int i=arr.size()-2;i>=0;i--)
        {
            int maxi=max(arr[i],ma);
            arr[i]=ma;
            ma=maxi;

        }
        return arr;
    }
};