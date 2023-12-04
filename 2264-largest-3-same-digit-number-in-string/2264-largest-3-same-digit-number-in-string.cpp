class Solution {
public:
    string largestGoodInteger(string num) {
        char a='0';
        int n=num.size();
        bool f=false;
        for(int i=0;i<n-2;i++)
        {
            if(num[i]==num[i+1]&&num[i]==num[i+2])
            {
                a=max(a,num[i]);
                i+=2;
                f=true;
            }
        }
        if(f)
        return {a,a,a};
        return "";
    }
};