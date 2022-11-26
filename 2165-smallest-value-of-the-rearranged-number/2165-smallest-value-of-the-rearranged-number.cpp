class Solution {
public:
    long long smallestNumber(long long num) {
        if(!num)
            return 0;
        string a=to_string(num);
        string f="";
        if(a[0]=='-')
           { f="-";a.erase(a.begin());}
        if(f!="-")
            sort(a.begin(),a.end());
        else sort(a.begin(),a.end(),greater<char>());
        if(a[0]=='0')
        {
            for(int i=1;i<a.size();i++)
                if(a[i]!='0')
                {
                    swap(a[i],a[0]);
                    break;
                }
        }
        if(f=="-")
            a=f+a;
        return stoll(a);
            
        
    }
};