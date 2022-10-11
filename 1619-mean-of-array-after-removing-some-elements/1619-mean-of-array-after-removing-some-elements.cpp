class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=arr.size()*0.05;
        double sum=accumulate(arr.begin(),arr.end(),0);
        cout<<sum;
        for(int j=0;j<i;j++)
        {
            sum-=(arr[j]+arr[arr.size()-j-1]);
        }
        return sum/(arr.size()-arr.size()*0.05*2);
    }
};