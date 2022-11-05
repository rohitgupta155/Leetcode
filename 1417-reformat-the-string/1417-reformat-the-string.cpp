class Solution {
public:
    string reformat(string s) {
     vector<char> c,n;
        for(auto i:s)
            if(i<='9'&&i>='0')
                n.push_back(i);
            else c.push_back(i);
        int d=c.size()-n.size();
        if(abs(d)>1)
            return "";
        s.clear();
        if(c.size()>n.size())
       { for(int i=0;i<n.size();i++)
        {
            s+=c[i];s+=n[i];
        }
        s+=c.back();
            return s;    }
        else if(c.size()<n.size()){
         for(int i=0;i<c.size();i++)
        {
            s+=n[i];s+=c[i];
        }
        s+=n.back();
        return s;}
        for(int i=0;i<c.size();i++)
        {
            s+=n[i];s+=c[i];
        }
        return s;
        
    }
};