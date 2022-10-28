class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i:arr)
            m[i]++;
        vector<pair<int,int>> s;
        for(auto i:m)
            s.push_back(make_pair(i.second,i.first));
        sort(s.begin(),s.end(),greater<pair<int,int>>());
        int a=0,c=0;
        for(auto i:s)
        {
            if(c<arr.size()/2)
            {
                c+=i.first;
                a++;
            }
        }
        return a;
        
    }
};