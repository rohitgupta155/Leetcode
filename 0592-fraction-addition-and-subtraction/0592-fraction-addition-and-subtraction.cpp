class Solution {
public:
    string fractionAddition(string e) {
        vector<pair<int,int>> n;
        long long d=1;
        for(int i=0;i<e.size();i++)
        {
            int num=1;
            if(e[i]=='-')
               { num=-1;
               i++;}
            else if(e[i]=='+')
                i++;
            if(e[i+1]=='/')
            {    num*=(e[i]-'0');
                i+=2;
            }
            else
             {   num*=((e[i]-'0')*10+(e[i+1]-'0'));
                i+=3;
             }
            if(i+1==e.size()){
                d*=(e[i]-'0');
                n.push_back({num,e[i]-'0'});
                break;
            }
            if(e[i+1]=='-'||e[i+1]=='+')
            {
                d*=(e[i]-'0');
                n.push_back({num,e[i]-'0'});
            }
            else{
                d*=((e[i]-'0')*10+(e[i+1]-'0'));
                n.push_back({num,(e[i]-'0')*10+(e[i+1]-'0')});
                i++;
            }
        }
        long long num=0;
        for(auto i:n)
            num+=i.first*(d/i.second);
        long long g=GCD(abs(num),d);
        return to_string(num/g)+"/"+to_string(d/g);
        
    }
    long long GCD(long long x, long long y)
{
    if (y == 0) return x;
    return GCD(y, x%y);
}
};