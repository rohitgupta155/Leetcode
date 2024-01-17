class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto i:queries)
        {
            int c=0;
            for(auto j:points){
                if(sqrt((j[1]-i[1])*(j[1]-i[1])+(j[0]-i[0])*(j[0]-i[0]))<=i[2])
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};