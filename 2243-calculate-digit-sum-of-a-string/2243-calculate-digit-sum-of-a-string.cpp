class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k)
        {
            string t;
            int n=k;
            vector<string> te;
            for(int i=0,j=0;i<s.size();j=i,i+=k)
            {
                if((i+k)<s.size())
                {
                    te.push_back(s.substr(i,k));
                }
                else{
                    te.push_back(s.substr(i,s.size()-i));
                }
            }
            for(auto i:te)
            {
                t+=sum(i);
            }
            s=t;
        }
        return s;
    }
    string sum(string i)
    {
        int l=0;
        for(auto j:i)
        {
            l+=(j-'0');
        }
        return to_string(l);
    }
};