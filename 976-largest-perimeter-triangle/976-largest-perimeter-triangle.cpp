class Solution {
public:
    int largestPerimeter(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=n.size()-3;i>=0;i--)
        if((n[i]+n[i+1])>n[i+2])
            return n[i]+n[i+1]+n[i+2];
        return 0;
    }
};