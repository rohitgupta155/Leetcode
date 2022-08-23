class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& a) {
        queue<int> e,o;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                e.push(a[i]);
            else 
                o.push(a[i]);
        }
        for(int i=0;i<n;i+=2)
        {
            a[i]=e.front();
            a[i+1]=o.front();
            o.pop();e.pop();
        }
        return a;
    }
};