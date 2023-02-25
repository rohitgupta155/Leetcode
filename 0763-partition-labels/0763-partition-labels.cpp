class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<vector<int>> i(26,vector<int>(2,-1));
        for(int j=0;j<s.size();j++)
        {
            if(i[s[j]-'a'][0]==-1)
                i[s[j]-'a'][0]=j;
                i[s[j]-'a'][1]=j;
            
        }
        vector<vector<int>> intervals;
        for(auto j:i)
        if(j[0]!=-1)
            intervals.push_back(j);
        return merge(intervals);
        
    }
    
    vector<int> merge(vector<vector<int>> &intervals){
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
        vector<int> a;
        for(auto i:ans)
        {
            a.push_back(i[1]-i[0]+1);
        }
        return a;
    }
};