class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int ans=0;
        priority_queue<int,vector<int>,greater<int>> b;
        int sum=0;
        for(int i=0;i<heights.size()-1;i++)
        {
            if(heights[i]>=heights[i+1])
                ans++;
            else
            {
                if(b.size()>=ladders)
                {
                   b.push(heights[i+1]-heights[i]);
                   if(sum+b.top()>bricks) break;
                    sum+=b.top();
                    ans++;
                   b.pop();
                }
                else{
                    b.push(heights[i+1]-heights[i]);
                    ans++;
                }
            }
        }
        cout<<endl;
        return ans;
        
    }
};