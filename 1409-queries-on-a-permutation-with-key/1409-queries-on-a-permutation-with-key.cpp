class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans(m),f;
        for(int i=0;i<m;i++)
            ans[i]=m-i;
        for(auto j:queries)
        {
            int index;
            for(int i=m-1;i>=0;i--)
                if(ans[i]==j)
                {
                    index=i;
                    break;
                }
            ans.erase(ans.begin()+index);
            ans.push_back(j);
            f.push_back(m-index-1);
        }
        return f;
        
    }
};