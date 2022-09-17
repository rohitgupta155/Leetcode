class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> a;
        for(auto i:nums)
          { if(i%2==0)
            a[i]++;}
        int m=INT_MIN;
        for(auto i:a)
            m=max(m,i.second);
        vector<int>v;
        for(auto i:a){
            if(i.second==m)
                v.push_back(i.first);
           
        } int mi=INT_MAX;
            for(auto i:v)
                mi=min(i,mi);
        if(mi==INT_MAX)
            return -1;
            return mi;
    }
};