class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        find("",2*n,0);
        vector<string> f;
        for(auto i:ans)
        {
            if(isvalid(i))
                f.push_back(i);
        }
        return f;
    }
    bool isvalid(string a)
    {
        int l=0;
        for(auto i:a)
        {
            if(i=='(')
                l++;
            else l--;
            if(l<0)
                return false;
        }
        return l==0;
    }
    void find(string a,int n,int i)
    {
        if(i==n)
        {
            ans.push_back(a);
            return;
        }
        find(a+"(",n,i+1);  
        find(a+")",n,i+1);
    }
};