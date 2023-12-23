class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> s;
        s.insert({0,0});
        int i=0,j=0;
        for(auto k:path)
        {
            if(k=='N')
                j++;
            else if(k=='E')
                i++;
            else if(k=='S')
                j--;
            else i--;
            if(s.find({i,j})!=s.end())
                return true;
            s.insert({i,j});
        }
        return false;
    }
};