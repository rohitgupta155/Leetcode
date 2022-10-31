class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size()*grid[0].size();
        vector<int> a;
        for(auto i:grid)
            a.insert(a.end(),i.begin(),i.end());
         k=k%n;
        if(k){
        reverse(a.begin()+n-k,a.end());
        reverse(a.begin(),a.begin()+n-k);
        reverse(a.begin(),a.end());
         }k=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++){
            grid[i][j]=a[k++];
                }
        }
        a.clear();
        return grid;
        
    }
};