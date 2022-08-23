class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& a) {
        if(a.size()==1)
            return a;
        priority_queue<int> o;
        priority_queue<int,vector<int>,greater<int>>e;
        int n=a.size(),m=0;
        if(n%2==1)
        {e.push(a[n-1]);
        n--;
        m=1;}
            for(int i=0;i<n;i+=2)
        {
            e.push(a[i]);
            o.push(a[i+1]);
        }
        for(int i=0;i<n;i+=2)
        {
            a[i]=e.top();
            a[i+1]=o.top();
            e.pop();o.pop();
        }
        if(m==1){
            a[n]=e.top();
        }
        
        return a;
    }
};