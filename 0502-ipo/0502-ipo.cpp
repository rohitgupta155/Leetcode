class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> m;
        for(int i=0;i<profits.size();i++)
        {
            m.push_back({capital[i],profits[i]});
        }
        sort(m.begin(),m.end());
        priority_queue<int> p;
        int ptr=0;
        for(int i=0;i<k;i++)
           {
            while(ptr<profits.size()&&m[ptr].first<=w)
                p.push(m[ptr++].second);
        if(p.empty())
            break;
        w+=p.top();
        p.pop();}
    
        return w;
    }
};