class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        int i=1;
        while(i<=n)
        {
            q.push(i);
            i++;
        }
        while(q.size()>1)
        {
            int r=k%q.size();
            r=(r==0)?k:r;
            while(r>1)
            {
                q.push(q.front());
                q.pop();
                r--;
            }
            q.pop();
        }
        return q.front();
    }
};