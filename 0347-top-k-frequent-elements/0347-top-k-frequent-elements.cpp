class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        unordered_map<int,int> m;
        vector<pair<int,int>> mi;
        vector<int> ans;
        int l=n.size();
        for(int i=0;i<l;i++)
            m[n[i]]++;
        for(auto i:m)
            cout<<i.first<<"->"<<i.second<<endl;
        for(auto i:m)
            {
            mi.push_back(make_pair(i.second,i.first));
        }
        sort(mi.rbegin(),mi.rend());
        cout<<endl;
        for(auto i:mi)
            cout<<i.first<<"->"<<i.second<<endl;
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