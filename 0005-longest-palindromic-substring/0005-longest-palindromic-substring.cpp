class Solution {
public:
    string longestPalindrome(string s) {
        int a=0,b=0;
        if(s.size()==1)
            return s;
       for(int i=0;i<s.size();i++)
       {
           int l=i,r=i;
           while(l>=0&&r<s.size()&&s[l]==s[r]){
               if(b<(r-l+1))
                   b=r-l+1,a=l;
               l--,r++;
           }
           l=i,r=i+1;
            while(l>=0&&r<s.size()&&s[l]==s[r]){
               if(b<(r-l+1))
                   b=r-l+1,a=l;
               l--,r++;
           }               
       }
        return s.substr(a,b);
    }
   
    
};