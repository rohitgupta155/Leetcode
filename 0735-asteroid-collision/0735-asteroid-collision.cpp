class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        stack<int> s;
        s.push(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(s.empty())
            {
                s.push(a[i]);
                continue;
            }
            if(s.top()<0&&a[i]>0)
                destruct(s,a[i]);
            else{
                s.push(a[i]);
            }
        }
        a.clear();
        while(!s.empty()){
            a.push_back(s.top());
        s.pop();}
        return a;
    }
    void destruct(stack<int> &s,int i)
    {
        
        while(!s.empty()&&s.top()<0)
        {
            int k=s.top();
            s.pop();
            if(i==abs(k))
                return;
            if(i>abs(k))
            {
                continue;
            }
            else{
                s.push(k);
                return;
            }
        }
        s.push(i);
    }
};