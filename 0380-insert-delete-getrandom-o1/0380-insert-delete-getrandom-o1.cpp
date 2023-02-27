class RandomizedSet {
public:
    unordered_map<int,int> s;
    vector<bool> vis;
    vector<int> v;
    int i=-1;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.count(val))
            return false;
        v.push_back(val);
        i++;
        s[val]=i;
        vis.push_back(true);
        return true;
        
    }
    
    bool remove(int val) {
        if(!s.count(val))
            return false;
        vis[s[val]]=false;
        s.erase(val);
        return true;
    }
    
    int getRandom() {
        int a;
        do{
             a=rand()%v.size();
            if(vis[a])
                return v[a];
        }
        while(!vis[a]);
            return v[0];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */