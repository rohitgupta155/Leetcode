class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n==0)
            return true;
        if(f.size()==1)
            return !f[0];
        int i;
        if(f[0]==0&&f[1]==0)
           { n--;
            f[0]=1;}
        for(i=1;i<f.size()-1;i++)
        {
            if(f[i]==0&&f[i-1]==0&&f[i+1]==0)
                {n--;
            f[i]=1;}
        }
        if(f[i]==0&&f[i-1]==0)
            n--;
        return n<=0;
    }
};