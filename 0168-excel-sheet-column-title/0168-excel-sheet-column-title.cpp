class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n>0)
        {
            int r=n%26;
            if(r==0)
              {  s+='Z';
                n-=26;}
            else
                s+=r+'A'-1;
            n/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};