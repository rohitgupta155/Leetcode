class Solution {
public:
    int clumsy(int n) {
        queue<char> q;
        q.push('*');
        q.push('/');
        q.push('+');
        q.push('-');
        int ans=n;
        n--;
        vector<int> record;
        while(n>0)
        {
            char op=q.front();
            q.pop();
            q.push(op);
            if(op=='*')
                ans*=n;
            else if(op=='/')
                ans/=n;
            else if(op=='+')
            {
                record.push_back(ans);
                ans=n;
            }
            else{
                record.push_back(ans);
                ans=n;
            }
            n--;
        }
        record.push_back(ans);
        int sum=record[0];
        bool flag=1;
        for(int i=1;i<record.size();i++)
        {
            if(flag)
            {
                sum+=record[i];
                flag=false;
            }
            else{
                flag=true;
                sum-=record[i];
            }
        }
        return sum;
    }
};