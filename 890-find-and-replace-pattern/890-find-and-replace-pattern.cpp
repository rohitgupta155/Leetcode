class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        unordered_map<char,vector<int>> m,pa;
        vector<string> ans;
        
        for(int i=0;i<p.size();i++)
        {
            pa[p[i]].push_back(i);
        }
        for(auto i:pa){
            cout<<i.first<<" ";
            for(auto j:i.second)
            cout<<j<<" ";
        cout<<endl<<endl;}
        for(int i=0;i<w.size();i++)
        {
            for(int j=0;j<w[0].size();j++)
        {
            m[w[i][j]].push_back(j);
        }
         for(auto i:m){
            cout<<i.first<<" ";
            for(auto j:i.second)
            cout<<j<<" ";
        cout<<endl;}
            bool c=true;
        for(int k=0;k<p.size();k++)
        {
            if(pa[p[k]]!=m[w[i][k]])
                {c=false;
                 cout<<"not "<<w[i]<<endl;
                break;}
        }
            cout<<endl;
            if(c)
               { cout<<"is "<<w[i]<<endl;
                ans.push_back(w[i]);}
            m.clear();
        }
        
        return ans;
    }
};