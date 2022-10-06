class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=0;
        for(auto i:logs)
        {
            if(i=="./")
                continue;
            else if(i=="../")
                {if(n!=0)
                n--;}
            else n++;
            
        }
        return n;
    }
};