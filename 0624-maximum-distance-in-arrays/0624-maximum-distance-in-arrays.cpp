class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        vector<pair<int,int>> high,low;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> low;

        if(arrays[0][0]<arrays[1][0]){
            low.push_back({arrays[0][0],0});    
            low.push_back({arrays[1][0],1});
        }
        else{
            low.push_back({arrays[1][0],1});   
            low.push_back({arrays[0][0],0});    
        }
        if(arrays[0].back()>arrays[1].back()){
        high.push_back({arrays[0].back(),0});
        high.push_back({arrays[1].back(),1});
        }
        else{
        high.push_back({arrays[1].back(),1});   
         high.push_back({arrays[0].back(),0});
        }

        for(int i=2;i<arrays.size();i++)
        {
            if(arrays[i][0]<=low[0].first&&arrays[i][0]<=low[1].first)
            {
                low[1]=low[0];
                low[0]={arrays[i][0],i};
                
            }
            else if(arrays[i][0]<=low[1].first)
            {
                low[1]={arrays[i][0],i};
            }
            if(arrays[i].back()>=high[0].first&&arrays[i].back()>=high[1].first)
            {
                high[1]=high[0];
                high[0]={arrays[i].back(),i};
                
                
            }
            else if(arrays[i].back()>=high[1].first)
            {
                high[1]={arrays[i][0],i};
            }
        }
        vector<pair<int,int>> p;
        p.push_back(low[0]);
        p.push_back(low[1]);
        p.push_back(high[0]);
        p.push_back(high[1]);
        int ans=0;
        for(int i=0;i<4;i++)
            for(int j=i+1;j<4;j++){
                if(p[i].second!=p[j].second)
                {
                    ans=max(ans,abs(p[i].first-p[j].first));
                }
            }
        
        return ans;
        
    }
};