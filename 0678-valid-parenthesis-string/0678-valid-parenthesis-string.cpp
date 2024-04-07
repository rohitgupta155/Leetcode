class Solution {
public:
    bool checkValidString(string s) {
        stack<int> l,r;
        int c=0;
        for(auto i:s)
        {
            if(i=='(')
                l.push(c);
            else if(i=='*')
                r.push(c);
            else{
                if(l.size())
                    l.pop();
                else if(r.size())
                    r.pop();
                else
                    return false;
            }
            c++;
        }
       while(r.size()&&l.size())
       {
           if(r.top()<l.top())
               return false;
           r.pop();
           l.pop();
       }
        return l.empty();
    }
};