class Solution {
public:
    vector<int> searchRange(vector<int>& n, int t) {
        int j=n.size();
        if(j==0)
            return {-1,-1};
        for(int i=0;i<j;i++)
        {
            if(n[i]==t)
                return check(n,t,i);
        }
        return {-1,-1};
    }
    vector <int> check(vector<int>& n, int t,int i)
    {
        int k=n.size(),j=i;
        for(j;j<k;j++)
        {
            if(n[j]!=t)
                break;
        }
    return {i,j-1};

    }
};