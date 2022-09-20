class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        string c;
        for(auto i:s)
        {
            if(i==' ')
                {a.push_back(c);
                c="";}
          else c+=i;
        }
        a.push_back(c);
        s.clear();     
        for(auto i:a)
        { reverse(i.begin(),i.end());
         s=s+i+" ";
        }
        s.pop_back();
        return s;
    }
};