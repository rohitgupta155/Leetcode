class MyHashMap {
public:
    int k[1000001];
    MyHashMap() {
        memset(k,-1,sizeof(k));
    }
    
    void put(int key, int value) {
        k[key]=value;
    }
    
    int get(int key) {
        return k[key];
    }
    
    void remove(int key) {
        k[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */