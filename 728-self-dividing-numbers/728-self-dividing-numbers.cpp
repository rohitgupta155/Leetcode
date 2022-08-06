class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> v;
        for(int i=l;i<=r;i++)
        {
            if(check(i))
            {
                v.push_back(i);
            }
        }
        return v;
    }
    bool check(int i)
    {
        if(i==0)
            return false;
        if(i<10){
            return true;
        }
        int n=i;
        while(n>0)
        {
            if(n%10==0)
                return false;
            if(i%(n%10)==0){
                n=n/10;
            }
            else
                return false;
        }
        return true;
    }
};