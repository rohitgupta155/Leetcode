class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> a(nums1.begin(),nums1.end()),b(nums2.begin(),nums2.end()),c(nums3.begin(),nums3.end());
        vector<int> ans;
        for(auto i:a)
        {
            if(b.find(i)!=b.end()&&c.find(i)!=c.end())
            {
                ans.push_back(i);
                b.erase(i);
                c.erase(i);
            }
            else if(b.find(i)!=b.end()){
                ans.push_back(i);     
                b.erase(i);
            }
             else if(c.find(i)!=c.end()){
                ans.push_back(i);
                c.erase(i);
            }
        }
        cout<<1;
        if(!b.empty())
        for(auto i:b)
        {
            if(c.find(i)!=c.end())
            {
                ans.push_back(i);
                c.erase(i);
            }
        }
        return ans;
    }
};