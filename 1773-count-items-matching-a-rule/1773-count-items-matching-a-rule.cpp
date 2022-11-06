class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j,c=0;
        if(ruleKey=="type")
            j=0;
        else if(ruleKey=="color")
            j=1;
        else if(ruleKey=="name")
            j=2;
        for(auto i:items)
        {
            if(i[j]==ruleValue)
                c++;
        }
        return c;
    }
};