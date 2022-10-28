class Solution {
public:
    string getPermutation(int n, int k) {
        string a;
        for(int i=1;i<=n;i++)
            a+=(i+'0');
        while(k-->1)
            next_permutation(a.begin(),a.end());
        return a;
    }
};