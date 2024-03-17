class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& n) {
        intervals.push_back(n);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        for(int i=1;i<=intervals.size();i++)
        {
            int start=intervals[i-1][0],end=intervals[i-1][1];
            if(i<intervals.size()&&intervals[i][0]<=end)
            {
               while(i<intervals.size()&&intervals[i][0]<=end)
                  { end=max(end,intervals[i][1]);i++;}
                
                while(i<intervals.size()&&intervals[i][0]<=intervals[i-1][1])
                   end=max(end,intervals[i][1]),i++;
            }
            ans.push_back({start,max(end,intervals[i-1][1])});
        }
        return ans;
    }
};