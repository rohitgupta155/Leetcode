class MyCircularQueue {
public:
    int m,i=-1;
     vector<int> q;
    MyCircularQueue(int k) {
        m=k;
    }
    
    bool enQueue(int v) {
        if(i<m-1){
            i++;
            q.push_back(v);
            return true;}
        return false;
    }
    
    bool deQueue() {
        if(i>=0)
        {
            i--;
            q.erase(q.begin());
            return true;
        }
        return false;
    }
    
    int Front() {
        if(i>=0)
            return q[0];
        return -1;
        
    }
    
    int Rear() {
        if(i>=0)
            return q[i];
        return -1;
    }
    
    bool isEmpty() {
        return i==-1;
    }
    
    bool isFull() {
        return i==m-1;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */