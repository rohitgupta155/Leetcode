class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<int,vector<int>> m;
        int j=0,k=1;
        for(char i:s)
        {
            m[i].push_back(j++);
        }
        for(auto i:m)
        {
            if((i.second[1]-i.second[0]-1)!=distance[i.first-'a'])
                {k=0;
                break;}
        }
        return k;
    }
};