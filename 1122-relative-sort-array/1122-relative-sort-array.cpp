class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
        }
        ans.clear();
        for(auto i:arr2)
        {
            while(m[i]--)
                ans.push_back(i);
            m.erase(i);
            
        }
        sort(arr1.begin(),arr1.end());
        for(int i:arr1)
            if(m.count(i))
                ans.push_back(i);
        return ans;
    }
};