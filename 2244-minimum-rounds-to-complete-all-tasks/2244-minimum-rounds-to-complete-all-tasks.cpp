class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        for(auto i:tasks)
            m[i]++;
        int r=0;
        for(auto i:m)
        {
            if(i.second==1)
                return -1;
            if(i.second<=3)
                r+=1;
            else{
                if(i.second%3==0)
                    r+=i.second/3;
                else
                    r+=(i.second/3+1);
            }
        }
        return r;
    }
};