class Solution {
public:
    vector<int> diStringMatch(string s) {
        unordered_map<int,int> m;
        vector<int> a;
        int n=s.size();
        int j=n,k=0;
        for(auto i:s)
        {
            if(i=='I')
            {
                if(!m[k]){
                    a.push_back(k);
                m[k]=1;}
                k++;
            }
            else{
                if(!m[j]){
                    a.push_back(j);
                m[j]=1;}
                j--;
            }
        }
        a.push_back(k);
        return a;
    }
};