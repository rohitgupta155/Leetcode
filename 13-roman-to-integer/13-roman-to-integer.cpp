class Solution {
public:
    int v(char a)
    {
        if(a=='I')
            return 1;
        if(a=='V')
            return 5;
        if(a=='X')
            return 10;
        if(a=='L')
            return 50;
        if(a=='C')
            return 100;
        if(a=='D')
            return 500;
            return 1000;
    }
    int romanToInt(string s) {
        int sum=v(s[s.size()-1]);
        for(int i=s.size()-2;i>=0;i--)
        {
            if(v(s[i])>=v(s[i+1]))
                sum+=v(s[i]);
            else{
                sum-=v(s[i]);
            }
        }
        return sum;
    }
};