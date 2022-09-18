class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> a,b;
        vector<int> a1,a2;
        for(auto i:nums1)
            a[i]++;
        for(auto i:nums2)
            b[i]++;
        for(auto i:b)
            if(!a.count(i.first))
                a1.push_back(i.first);
        
        for(auto i:a)
            if(!b.count(i.first))
                a2.push_back(i.first);
        return {a2,a1};
    }
};