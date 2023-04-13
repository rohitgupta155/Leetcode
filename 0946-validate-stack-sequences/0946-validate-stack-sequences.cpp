class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i=0,j=0;
        while(i<pushed.size())
        {
            s.push(pushed[i++]);
            if(s.top()==popped[j])
            {
                while(j<popped.size()&&!s.empty()&&popped[j]==s.top())
                {
                    s.pop();
                    j++;
                }
            }
        }
        return s.empty();
    }
};