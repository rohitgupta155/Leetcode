class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& s) {
        queue<int> q;
        for(auto i:students)
            q.push(i);
        reverse(s.begin(),s.end());
        while(!q.empty())
        {
            int n=q.size();
            int t=n;
            while(n--){
                if(q.front()==s.back())
                {
                    q.pop();
                    s.pop_back();
                }
                else
                {
                    q.push(q.front());
                    q.pop();
                }
            }
        if(t==q.size())
            break;
        }
        return s.size();
    }
};