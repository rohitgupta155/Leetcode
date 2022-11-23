class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> a;
        string b="";
        int m=0; 
        for(auto i:s)
        {
            if(i==' ')
            {
                if(b!="")
                {a.push_back(b);
                 if(b.size()>m)
                 m=b.size();}
                b="";
            }
            else b+=i;
        }
        if(b!="")
                {a.push_back(b);
                 if(b.size()>m)
                 m=b.size();}
        vector<string> ans;
        for(int i=0;i<m;i++)
        {
            string c="";
            for(auto j:a)
            {
                if(i<j.size())
                    c+=j[i];
                else
                    c+=' ';
            }
            while(c.back()==' ')
                c.pop_back();
            ans.push_back(c);
        }
        return ans;
        
    }
};