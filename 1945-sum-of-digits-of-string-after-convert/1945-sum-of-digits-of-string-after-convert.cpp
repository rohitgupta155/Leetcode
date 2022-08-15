class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=getsum(s[i]-'a'+1);
        }
        if(k==1)
            return sum;
        for(int j=1;j<k;j++)
            sum=getsum(sum);
        return sum;
    }
    int getsum(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
};