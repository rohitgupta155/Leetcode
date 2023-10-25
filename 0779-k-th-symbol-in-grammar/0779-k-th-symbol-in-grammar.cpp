class Solution {
public:
    int kthGrammar(int n, int k,int val=0) {
        if(n==1)
            return val;
        int t=1<<(n-1);
        if(k<=t/2)
        {
            if(val)
                return kthGrammar(n-1,k,val);
            return kthGrammar(n-1,k,val);
                
        }
        if(val)
            return kthGrammar(n-1,k-(t/2),0);
        return kthGrammar(n-1,k-(t/2),1);
    }
};