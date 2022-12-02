class Solution {
public:
    bool buddyStrings(string a, string b) {
       if(a.size()!=b.size())
            return false;
        if(a==b)
        {
            unordered_map<char,int> c;
            for(auto i:a)
                c[i]++;
            for(auto i:c)
                if(i.second>1)
                    return true;
            return false;
            
        }
        else{
            int f=-1,s=-1;
            for(int i=0;i<a.size();i++)
            {
                if(a[i]!=b[i])
                {
                    if(f==-1)
                        f=i;
                    else if(s==-1)
                        s=i;
                    else return false;
                }
            }
             return s!=-1&&a[f]==b[s]&&a[s]==b[f];
        }
       
    }
};