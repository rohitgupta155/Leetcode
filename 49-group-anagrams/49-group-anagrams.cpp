class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& w) {
        vector<vector<string>> s;
        vector<string> d;
        d=w;
        for(int i=0;i<d.size();i++)
            sort(d[i].begin(),d[i].end());
        for(int i=0;i<w.size();i++)
        {
            vector<string> an;
            an.push_back(w[i]);
        //string st=w[i];
            //sort(st.begin(),st.end());
        for(int j=i+1;j<w.size();j++){
            // string a=w[j];
            // sort(a.begin(),a.end());
         if(d[i]==d[j]){
             an.push_back(w[j]);
         w.erase(w.begin()+j);
             d.erase(d.begin()+j);
             j--;
         }
        }
            s.push_back(an);
        }
        return s;
    
    }
};