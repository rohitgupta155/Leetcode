class RecentCounter {
public:
    stack<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        int range=t-3000;
        stack<int> s;
        int c=0;
        while(!q.empty()&&q.top()>=range){
            s.push(q.top());
            q.pop();
            c++;
        }
        while(!s.empty())
        {
            q.push(s.top());
            s.pop();
        }
        return c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */