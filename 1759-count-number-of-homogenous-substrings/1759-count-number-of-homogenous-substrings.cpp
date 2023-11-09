class Solution {
public:
    int countHomogenous(string s) {
        unordered_map<string,int> m;
        int n=s.size();
        string a;
        a+=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            {
                a+=s[i];
            }
            else{
                m[a]++;
                a="";
                a+=s[i];
            }
        }
        m[a]++;
        long long int sum=0;
        for(auto i:m)
            {
             sum+=(1LL*i.second*(i.first.size()*(i.first.size()+1)/2));
        }
        return sum%(1000000007);
    }
};