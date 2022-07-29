class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums)
            m[i]++;
        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
            if(i.second>nums.size()/2)
                return i.first;
        }
        return -1;
    }
};