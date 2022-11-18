class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int v, int p, int d) {
        vector<vector<int>> r;
        for(auto i:restaurants)
        {
            if((v-i[2]<=0)&&i[3]<=p&&i[4]<=d)
            r.push_back(i);
        }
         for(int i=0;i<r.size();i++)
             swap(r[i][1],r[i][0]);
        sort(r.begin(),r.end());
        vector<int>a;
        for(auto i:r)
            a.push_back(i[1]);
        reverse(a.begin(),a.end());
        return a;
            
    }
};