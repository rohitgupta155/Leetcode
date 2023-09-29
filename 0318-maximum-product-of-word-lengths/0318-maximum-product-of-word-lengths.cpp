class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        unordered_map<string,unordered_set<char>> m;
        for(int i=0;i<words.size();i++)
            for(auto j:words[i])
                m[words[i]].insert(j);
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                bool flag=true;
                for(auto k:m[words[j]])
                {
                    if(m[words[i]].find(k)!=m[words[i]].end())
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                {
                    ans=max(ans,(int)words[i].size()*(int)words[j].size());
                }
            }
        }
        return ans;
    }
};