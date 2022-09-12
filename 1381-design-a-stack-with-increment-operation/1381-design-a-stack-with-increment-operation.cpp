class CustomStack {
public:
    vector<int> a;
    int index;
    int m;
    CustomStack(int maxSize) {
        index=-1;
        m=maxSize;
    }
    
    void push(int x) {
        if(index<(m-1)){
            a.push_back(x);
            index++;}
    }
    
    int pop() {
        if(index>=0)
        {    
           int r=a[index--];
            a.pop_back();
            return r;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int i=0;
        while(i<=index&&i<k)
            {a[i]+=val;
        i++;}
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */