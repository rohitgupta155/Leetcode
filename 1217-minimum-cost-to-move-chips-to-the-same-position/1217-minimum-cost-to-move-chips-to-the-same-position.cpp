class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int o=0,e=0;
        for(auto i:position)
        {
            if(i%2)
                o++;
            else e++;
        }
        if(o==0||e==0)
            return 0;
        if(o>e)
            return e;
        else return o;
    }
};