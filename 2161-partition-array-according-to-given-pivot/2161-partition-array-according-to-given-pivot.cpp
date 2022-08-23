class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int p) {
        queue<int> l,g;
        int c=0,j=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]<p)
                l.push(a[i]);
            else if(a[i]>p)
                g.push(a[i]);
            else c++;
        }
        while(!l.empty()){
        a[j++]=l.front();
            l.pop();}
        while(c>0){
        a[j++]=p;
            c--;}
    while(!g.empty()){
        a[j++]=g.front();
            g.pop();}
    return a;
    }
};