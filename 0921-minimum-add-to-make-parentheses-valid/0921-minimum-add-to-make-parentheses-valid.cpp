class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        if(s[0]=='(')
        st.push(s[0]);
        else ans++;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push('(');
            else{
                if(st.size())
                    st.pop();
                else ans++;
            }
        }
        
        return ans+st.size();
    }
};