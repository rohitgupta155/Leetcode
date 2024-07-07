class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        while(numBottles>=numExchange)
        {
            int d=numBottles-numBottles%numExchange;
            numBottles=numBottles%numExchange;
            numBottles+=d/numExchange;
            ans+=d;
        }
        return ans+numBottles;
    }
};