class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>> s;
    unordered_set<int> m;
    SmallestInfiniteSet() {
        for(int i=1;i<=1001;i++)
          {  s.push(i);}
    }
    
    int popSmallest() {
        int a=s.top();
        s.pop();
        m.insert(a);
        return a;
    }
    
    void addBack(int num) {
        if(m.find(num)!=m.end())
       { s.push(num);
          m.erase(num);}
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */