class LRUCache {
public:
    unordered_map<int,pair<int,int>> m;
    map<int,int> lru;
    int n=0;
    int c;
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(!m.count(key))
            return -1;
        n++;
            lru.erase(m[key].second);
            m[key]={m[key].first,n};
            lru[n]=key;
        return m[key].first;
    }
    
    void put(int key, int value) {
        n++;
        if(m.count(key))
        {
            lru.erase(m[key].second);
            m[key]={value,n};
            lru[n]=key;
            
        }
        else if(m.size()<c){
            m[key]={value,n};
            lru[n]=key;
        }
        else{
            m.erase(lru.begin()->second);
            m[key]={value,n};
            lru.erase(lru.begin()->first);
            lru[n]=key;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */