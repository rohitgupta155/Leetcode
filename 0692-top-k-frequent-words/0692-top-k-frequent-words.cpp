class Solution {
public:
    vector<string> topKFrequent(vector<string>& n, int k) {
         unordered_map<string,int> m;
        vector<pair<int,string>> mi;
        vector<string> ans;
        int l=n.size();
        for(int i=0;i<l;i++)
            m[n[i]]++;
        for(auto i:m)
            {
            mi.push_back(make_pair(-i.second,i.first));
        }
        sort(mi.begin(),mi.end());
        int j=0;
        for(auto i:mi)
            {
            j++;
            ans.push_back(i.second);
             if(j==k)
                 break;
        }
        return ans;
        
    }
};