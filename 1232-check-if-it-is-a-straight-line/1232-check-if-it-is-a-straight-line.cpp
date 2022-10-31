class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c.size()==2)
            return true;
        for(int i=2;i<c.size();i++)
        {
            if((c[i-1][1]-c[i-2][1])*(c[i][0]-c[i-1][0])!=(c[i][1]-c[i-1][1])*(c[i-1][0]-c[i-2][0]))
                return false;
        }
        return true;
    }
};