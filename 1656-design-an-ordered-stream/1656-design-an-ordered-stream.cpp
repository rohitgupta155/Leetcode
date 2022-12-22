class OrderedStream {
public:
    int p=1;
    unordered_map<int,string> m;
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        m[idKey]=value;
        vector<string> ans;
        if(m.count(p))
            while(m.count(p)){
                ans.push_back(m[p]);
                p++;
            }
            return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */