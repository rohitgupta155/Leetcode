class Solution {
public:
    string largestGoodInteger(string num) {
        string a;
        int n=num.size();
        for(int i=0;i<n-2;i++)
        {
            if(num[i]==num[i+1]&&num[i]==num[i+2])
            {
                string b=num.substr(i,3);
                a=max(a,b);
            }
        }
        return a;
    }
};