/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    
    vector<int> ans;
    int i=0;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto i:nestedList)
        {
            if(i.isInteger())
                ans.push_back(i.getInteger());
            else{
                vector<NestedInteger> j=i.getList();
                vector<int> t=n(j);
                ans.insert(ans.end(),t.begin(),t.end());
}
        }
    }
    
    int next() {
        return ans[i++];
    }
    
    bool hasNext() {
        return i<ans.size();
    }
    vector<int> n(vector<NestedInteger> &nestedList)
    {
        vector<int> temp;
        for(auto i:nestedList)
        {
            if(i.isInteger())
                temp.push_back(i.getInteger());
            else
                {vector<NestedInteger> j=i.getList();
                vector<int> t=n(j);
                temp.insert(temp.end(),t.begin(),t.end());}
        }
        return temp;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */