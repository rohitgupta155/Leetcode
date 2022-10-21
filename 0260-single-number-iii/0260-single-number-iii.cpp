class Solution {
public:
    vector<int> singleNumber(vector<int>& num) {
        if(num.size()==2)
            return num;
        unordered_map<int,int> m;
        for(int i:num)
        {
            m[i]++;
        }
        
        num.clear();
        for(auto i:m)
           { if(i.second==1)
                num.push_back(i.first);
        if(num.size()==2)break;}
        return num;
        
    }
};