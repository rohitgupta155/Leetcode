class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> s;
        for(auto i:tokens)
        {
            if(i=="+"||i=="-"||i=="*"||i=="/")
              { 
                long b=s.top();
                s.pop();
                long a=s.top();
                s.pop();
                if(i=="+")s.push(a+b);
                else if(i=="-")  s.push(a-b);
                else if(i=="*")  s.push(a*b);
                else if(i=="/")  s.push(a/b);
                cout<<a<<i<<b<<"="<<s.top()<<endl;
                }
            else{s.push(stoi(i));}
        }
        return s.top();
    }
};