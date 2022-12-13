class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> a;
        string b="";
        int s=0;
        for(auto i:text)
        {
            if(i==' ')
            {
                s++;
                if(b!="")
                {
                    a.push_back(b);
                    b="";
                }
            }
            else
            b+=i;
        }
        if(b!="")
                {
                    a.push_back(b);
                    b="";
                }
        if(a.size()==1)
        {
            b+=a[0];
            while(s--)
                b+=' ';
            return b;
        }
        int e=s/(a.size()-1);
        for(auto i:a)
        {
            b+=i;
            int c=e;
            while(c--){
                b+=' ';
  } 
      }
        if(a.size()==s+1){
            b.pop_back();
            return b;}
        if(e==1&&s==a.size())
            return b;
         s-=e*(a.size()-1);
        while(e--)
            b.pop_back();
       
        if(s>0)
        while(s--)
            b+=' ';

        return b;
        
        
        
    }
};