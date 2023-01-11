class Solution {
public:
    int countDigits(int num) {
        string a=to_string(num);
        unordered_map<int,int> m;
        for(auto i:a)
            m[i-'0']++;
        int ans=0;
        for(auto i:m)
        {
            if(num%(i.first)==0)
                ans+=i.second;
        }
        return ans;
    }
};