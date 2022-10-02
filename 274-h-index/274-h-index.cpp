class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int n=c.size();
        for(int i:c)
        {
            if(i>=n)
                return n;
            n--;
        }
        return n;
    }
};