class Solution {
public:
    int singleNumber(vector<int>& n) {
        sort(n.begin(),n.end());
        for(int i=n.size()-1;i>=2;i-=3)
        {
            if(n[i]!=n[i-1])
                return n[i];
        }
        return n[0];
    }
};