class Solution {
public:
    string toHex(int n) {
        if(n==0)
            return "0";
        string a;
        unsigned int num=n;
        while(num>0)
        {
            a+=con(num%16);
            num/=16;
        }
         reverse(a.begin(),a.end());
        return a;
    }
    string con(int n)
    {
        if(n<10)
            return to_string(n);
        char a=87+n;
        return {a};
    }
};