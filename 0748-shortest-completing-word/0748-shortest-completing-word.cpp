class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> m,t;
        string ans="";
        for(auto i:licensePlate)
            if((i>='a'&&i<='z')||(i>='A'&&i<='Z'))m[tolower(i)]++;
        for(auto i:words)
        {
            int c=0;
            for(auto j:i)
                t[j]++;
            for(auto l:m)
            {
                if(t.count(l.first)&&t[l.first]>=l.second)
                    c++;
            }
            if(c==m.size())
            {
                if(ans=="")
                    ans=i;
                else if(ans.size()>i.size())
                    ans=i;
            }
            t.clear();
        }
        return ans;
    }
};