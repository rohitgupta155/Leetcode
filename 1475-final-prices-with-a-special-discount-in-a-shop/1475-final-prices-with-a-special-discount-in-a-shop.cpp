class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int m=prices.back();
        vector<int> ans(prices.size());
        stack<int> s;
        for(int i=prices.size()-1;i>=0;i--)
        {
            if(!s.empty())
            {
                while(!s.empty()&&s.top()>prices[i])
                    s.pop();
                if(!s.empty())
                    ans[i]=prices[i]-s.top();
                    else ans[i]=prices[i];
                s.push(prices[i]);
            }
            else {ans[i]=prices[i];
            s.push(prices[i]);}
        }
        return ans;
    }
};