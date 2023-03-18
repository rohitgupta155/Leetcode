class BrowserHistory {
public:
    stack<string> f,b;
    BrowserHistory(string homepage) {
        b.push(homepage);
    }
    
    void visit(string url) {
        b.push(url);
        f=stack<string>();
    }
    
    string back(int steps) {
        while(steps--&&!b.empty())
        {
            f.push(b.top());
            b.pop();
        }
        if(b.empty())
            {b.push(f.top());
            f.pop();}
        
        return b.top();
    }
    
    string forward(int steps) {
        while(steps--&&!f.empty())
        {
            b.push(f.top());
            f.pop();
        }
        return b.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */