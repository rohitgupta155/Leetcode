class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        vector<int> ans(heights.size(),0);
        stack<int> s;
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(!s.empty()&&heights[i]>s.top())
            {
                s.pop();
                ans[i]++;
            }
            if(!s.empty())
                ans[i]++;
            s.push(heights[i]);
        }
        return ans;
    }
};