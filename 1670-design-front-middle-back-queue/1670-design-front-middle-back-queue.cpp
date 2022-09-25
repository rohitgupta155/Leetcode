class FrontMiddleBackQueue {
public:
     int i=-1;
     vector<int> q;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int v) {
            i++;
            q.insert(q.begin(),v);
    }
    
    void pushMiddle(int v) {
        i++;
            q.insert(q.begin()+(i/2),v);
    }
    
    void pushBack(int v) {
        i++;
            q.push_back(v);
    }
    
    int popFront() {
        if(i==-1)
            return i;
        i--;
        int t=q[0];
        q.erase(q.begin());
        cout<<t<<" ";
        return t;
    }
    
    int popMiddle() {
        if(i==-1)
            return i;
        int t=q[i/2];
        q.erase(q.begin()+(i/2));
        i--;
        return t;
    }
    
    int popBack() {
        if(i==-1)
            return i;
        int t=q[i];
        q.pop_back();
        cout<<t;
        i--;
        return t;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */