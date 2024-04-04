class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        if(possible[0]==0)
            possible[0]=-1;
        for(int i=1;i<possible.size();i++){
            if(possible[i]==0)
            possible[i]=-1;
            possible[i]+=possible[i-1];
    }
            for(int i=0;i<possible.size()-1;i++)
            {
                if(possible.back()-possible[i]<possible[i])
                    return i+1;
            }
        return -1;
    }
};