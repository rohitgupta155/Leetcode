class Solution {
public:
    string reformatNumber(string ans) {
        string a;
        for(auto i:ans)
        {
            if(i!=' '&&i!='-')
                a+=i;
        }
        ans.clear();
        ans="";
        int i=0,n=a.size()%3;
        if(n==1)
            n=4;
        
        while(i<(a.size()-n))
        {
          ans+=a.substr(i,3);
          ans+="-"; 
          i+=3;
        }
        if(n==4)
            ans=ans+a[i]+a[i+1]+"-"+a[i+2]+a[i+3];
        else if(n)
        ans+=a.substr(i,n);
        else ans.pop_back();
        return ans;
    }
};