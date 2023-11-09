class Solution {
public:
    int numSub(string s) {
        unordered_map<string,int> m;
        string a;
        for(auto i:s)
        {
            if(i=='0')
            {
                m[a]++;
                a="";
            }
            else{
                a+='1';
            }
        }
        if(a.size())
        m[a]++;
        long long int sum=0;
        for(auto i:m)
            {
             sum+=(1LL*i.second*(i.first.size()*(i.first.size()+1)/2));
        }
        return sum%(1000000007);
    }
};