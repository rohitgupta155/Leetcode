class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        set<pair<double,vector<int>>> s;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                s.insert({arr[i]*1.0/arr[j],{arr[i],arr[j]}});
            }
        }
        auto it = s.begin();
        advance(it, k - 1);
        return it->second;
    }
};