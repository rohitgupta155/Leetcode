class MyHashSet {
public:
    int a[1000001]={0};
    MyHashSet() {
        
    }
    
    void add(int key) {
        this->a[key]=1;
    }
    
    void remove(int key) {
        this->a[key]=0;
    }
    
    bool contains(int key) {
        return this->a[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */