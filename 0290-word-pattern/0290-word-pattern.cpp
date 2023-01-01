class Solution {
public:
    bool wordPattern(string pa, string s) {
        int j=0,n=pa.size();
        unordered_map<string,vector<int>> w1;
        unordered_map<char,vector<int>> p;
        vector<string> w;
        for(int i=0;i<n;i++)
            p[pa[i]].push_back(i);
        string a;
        for(char i=s[j];i!='\0';j++,i=s[j])
        {
            if(i==' ')
                {
                w.push_back(a);
                a="";}
            else
            a+=i;
        }
        w.push_back(a);        
        if(n!=w.size())
            return false;
        for(int i=0;i<n;i++)
            w1[w[i]].push_back(i);
        for(int i=0;i<n;i++){
            if(p[pa[i]]!=w1[w[i]])
                return false;
}        return true;
    }
};