class Solution {
public:
    string removeOuterParentheses(string s) {
        string t,ans;
        stack<char> st;
        for(auto i:s)
        {
            if(i=='(')
              {  st.push('(');
              t+='(';}
            else{
                st.pop();
                t+=')';
            }
            if(st.empty())
            {
                ans+=t.substr(1,t.size()-2);
                t.clear();
            }
        }
        return ans;
    }
};