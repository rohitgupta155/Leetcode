class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s;
        int c=0;
        for(auto i:allowed)
            s.insert(i);
        for(auto i:words)
        {
            bool f=true;
            for(auto j:i)
            {
                if(s.find(j)==s.end())
                {
                    f=false;
                    break;
                }
            }
            if(f)c++;
        }
        return c;
    }
};