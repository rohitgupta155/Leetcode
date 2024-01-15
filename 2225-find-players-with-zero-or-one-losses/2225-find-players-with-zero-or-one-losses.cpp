class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_set<int> s;
        unordered_map<int,int> m;
        
        for(auto it :matches){
            s.insert(it[0]);
            s.insert(it[1]);
            m[it[1]]++;
            
        }
        
        vector<vector<int>> ans(2);
        
        for(auto it : s){
            if(!m[it]){
                ans[0].push_back(it);
            }else if(m[it]==1){
                ans[1].push_back(it);
                
                
            }
        }
        sort(ans[0].begin(), ans[0].end());
        sort(ans[1].begin(), ans[1].end());
        return ans;
        
        
    }
};