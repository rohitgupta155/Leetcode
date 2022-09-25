class MyCircularDeque {
public:
     int m,i=-1;
     vector<int> q;
    MyCircularDeque(int k) {
        m=k;
    }
    
    bool insertFront(int value) {
         if(i<m-1){
            i++;
            q.insert(q.begin(),value);
            return true;}
        return false;
    }
    
    bool insertLast(int value) {
         if(i<m-1){
            i++;
            q.push_back(value);
            return true;}
        return false;
    }
    
    bool deleteFront() {
        if(i>=0)
        {
            i--;
            q.erase(q.begin());
            return true;
        }
        return false;
    }
    
    bool deleteLast() {
        if(i>=0)
        {
            i--;
            q.pop_back();
            return true;
        }
        return false;
    }
    
    int getFront() {
        if(i>=0)
            return q[0];
        return -1;
    }
    
    int getRear() {
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
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */