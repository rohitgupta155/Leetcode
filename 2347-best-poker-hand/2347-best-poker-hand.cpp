class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_set<char> s(suits.begin(),suits.end());
        if(s.size()==1)
            return "Flush";
        s.clear();
        unordered_map<int,vector<char>> m;
        for(int i=0;i<5;i++)
        {
            m[ranks[i]].push_back(suits[i]);
        }
        int t=0,p=0;
        for(auto i:m)
        {
            if(i.second.size()>2)
                return "Three of a Kind";
            else if(i.second.size()==2)
                p=1;
        }
        if(p)
            return "Pair";
        return "High Card";
    }
};