class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> m;
        int e=0;
        for(auto i:words)
        {
            m[i]++;
        }
        bool f=false;
        for(auto i:m)
        {
            if(i.first[0]==i.first[1])
               {if(!f&&i.second%2==1){
                   e+=i.second*2;
                   f=true;
               } else e+=(i.second/2)*4;}
            else if(m.count({i.first[1],i.first[0]}))
            {string s={i.first[1],i.first[0]};
               e+=min(i.second,m[s])*2;
}
        }
        return e;
    }
};