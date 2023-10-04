class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        stack<int> s;
        s.push(a[n-1]);
        // for(int i=n-2;i>=0;i--)
        // {
        //     if(s.empty())
        //         s.push(a[i]);
        //     else if((a[i]>0&&s.top()>0)||(a[i]<0&&s.top()<0))
        //         s.push(a[i]);
        //     else if(abs(a[i])>abs(s.top())&&a[i]>0&&s.top()<0){
        //         if(s.top()<0){
        //         while(!s.empty()&&abs(a[i])>abs(s.top())&&a[i]>0&&s.top()<0)s.pop();
        //         if(!s.empty()&&abs(a[i])==abs(s.top())&&a[i]>0&&s.top()<0)
        //             {s.pop();
        //             continue;}}
        //          s.push(a[i]);}
        //     else if(abs(a[i])==abs(s.top())) {
        //         if(s.top()<0)
        //         s.pop();
        //         else
        //             s.push(a[i]);
        //     }
        //     else{
        //         if(s.top()<0&&abs(a[i])<abs(s.top()))
        //             continue;
        //         s.push(a[i]);
        //     }
        // }
        for(int i=n-2;i>=0;i--)
        {
            if(s.empty())
            {
                s.push(a[i]);
                continue;
            }
            if(s.top()<0&&a[i]>0)
                destruct(s,a[i]);
            else{
                s.push(a[i]);
            }
        }
        a.clear();
        while(!s.empty()){
            a.push_back(s.top());
        s.pop();}
        //reverse(a.begin(),a.end());
        return a;
    }
    void destruct(stack<int> &s,int i)
    {
        
        while(!s.empty()&&s.top()<0)
        {
            int k=s.top();
            s.pop();
            if(i==abs(k))
                return;
            if(i>abs(k))
            {
                continue;
            }
            else{
                s.push(k);
                return;
            }
        }
        s.push(i);
    }
};