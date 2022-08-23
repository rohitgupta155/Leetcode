class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        if(a.size()==1)
            return a;
        queue<int>o,e;
        int n=a.size(),j=0;
            for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                e.push(a[i]);
                else o.push(a[i]);
        }
        while(!e.empty())
        {
            a[j++]=e.front();
            e.pop();
        }
        while(!o.empty())
        {
            a[j++]=o.front();
            o.pop();
        }
        
        return a;
    }
};