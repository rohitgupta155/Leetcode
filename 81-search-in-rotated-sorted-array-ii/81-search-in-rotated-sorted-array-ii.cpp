class Solution {
public:
    bool search(vector<int>& n, int t) {
         int j=n.size();
        for(int i=0;i<=j/2;i++)
        {
            if(n[i]==t)
                return true;
            else if(n[j-i-1]==t)
                return true;
        }
        return false;
    }
};