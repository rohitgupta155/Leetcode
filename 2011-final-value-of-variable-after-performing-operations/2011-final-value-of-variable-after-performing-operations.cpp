class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        for(auto i:operations)
            if(i=="X++"||i=="++X")
                c++;
            else c--;
        return c;
    }
};