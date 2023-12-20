class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int second=max(prices[0],prices[1]),first=min(prices[0],prices[1]);
        for(int i=2;i<prices.size();i++)
        {
            if(prices[i]<first)
            {
                second=first;
                first=prices[i];
            }
            else if(prices[i]<second)
            {
                second=prices[i];
            }
        }
        if(first+second>money)
            return money;
        return money-first-second;
    }
};