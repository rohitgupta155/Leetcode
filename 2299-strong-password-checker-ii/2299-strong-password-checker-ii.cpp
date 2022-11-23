class Solution {
public:
    bool strongPasswordCheckerII(string p) {
        if(p.size()<8)
            return false;
        int l=0,u=0,d=0,s=0;
        for(int i=0;i<p.size()-1;i++)
        {
            if(p[i]==p[i+1])
                return false;
            if(p[i]>='a'&&p[i]<='z')
                l++;
            else if(p[i]>='A'&&p[i]<='Z')
                u++;
            else if(p[i]>='0'&&p[i]<='9')
                d++;
            else s++;
            
        }
        int i=p.size()-1;
        if(p[i]>='a'&&p[i]<='z')
                l++;
            else if(p[i]>='A'&&p[i]<='Z')
                u++;
            else if(p[i]>='0'&&p[i]<='9')
                d++;
            else s++;
        return l>0&&u>0&&d>0&&s>0;
    }
};