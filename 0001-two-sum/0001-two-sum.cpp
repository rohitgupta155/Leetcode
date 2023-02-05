class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        unordered_map<int,vector<int>> m;
        int j=0;
        for(int i:n)
        {
            m[i].push_back(j++);
        }
        for(int i:n)
            if(m.count(target-i))
                {if(m[target-i].size()==2)
                    return m[target-i];
        else
                if(m[i][0]!=m[target-i][0])
                return {m[i][0],m[target-i][0]};}
        return {0,0};
    }
};