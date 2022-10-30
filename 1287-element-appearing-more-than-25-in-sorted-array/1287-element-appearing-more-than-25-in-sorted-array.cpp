class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:arr)
        {
            m[i]++;
            if(m[i]>arr.size()/4)
                return i;
        }
        return 1;
    }
};