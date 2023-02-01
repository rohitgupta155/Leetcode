class Solution {
public:
    int sum(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int sumBase(int n, int k) {
        int num=0;
        while(n>0)
        {
            num=(n%k)+num*10;
            n/=k;
        }
        string a=to_string(num);
        reverse(a.begin(),a.end());
        num=stoi(a);
        return sum(num);
    }
};