class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;
        int l=0,r=0;
        for(;r<fruits.size();r++)
        {
            m[fruits[r]]++;
            if(m.size()>2)
            {
                m[fruits[l]]--;
                if(m[fruits[l]]==0)
                    m.erase(fruits[l]);
                l++;
            }
        }
        return r-l;
    }
};