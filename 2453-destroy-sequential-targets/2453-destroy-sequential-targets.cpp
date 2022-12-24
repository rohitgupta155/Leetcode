class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        unordered_map<int,vector<int>> m;
        sort(nums.begin(),nums.end());
        for(auto i:nums)
        {
            m[i%space].push_back(i);
        }
        for(auto i:m)
           { cout<<i.first<<"->";
            for(auto j:i.second)
                cout<<j<<" ";
            cout<<endl;}
        int c=INT_MIN,ma;
        for(auto i:m)
        {
            int j=i.second.size();
            if(c<j){ma=i.first;c=j;}
            else if(c==j){
                if(m[ma][0]>i.second[0])
                    ma=i.first;
            }
        }
        return m[ma][0];
    }
};