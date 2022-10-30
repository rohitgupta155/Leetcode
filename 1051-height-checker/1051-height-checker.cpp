class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> e=h;
        int c=0;
        sort(e.begin(),e.end());
        for(int i=0;i<h.size();i++)
        {
            if(e[i]!=h[i])
                c++;
        }
        return c;
    }
};