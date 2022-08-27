class Solution {
public:
        int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
    vector<string> simplifiedFractions(int n) {
        vector<string> a;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                string s;
                if(i==1&&j<=n)
                 {
                    s.append(to_string(i));
                    s.append("/");
                    s.append(to_string(j));
                a.push_back(s);
                }
                else if(gcd(j,i)==1)
                {
                    s.append(to_string(i));
                    s.append("/");
                    s.append(to_string(j));
                    a.push_back(s);
                }
            }
            
        }
        return a;
    }
};