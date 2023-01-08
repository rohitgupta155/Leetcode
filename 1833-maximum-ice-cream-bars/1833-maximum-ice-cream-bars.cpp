class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int c=0;
        for(auto i:costs)
        {
            if(coins-i>=0)
            {
                coins-=i;
                c++;
            }
            
        }
        return c;
    }
};