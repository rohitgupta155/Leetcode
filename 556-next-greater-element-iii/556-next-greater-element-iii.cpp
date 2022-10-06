class Solution {
public:
    int nextGreaterElement(int n) {
        if(n==1)
            return -1;
       string v=to_string(n);
        cout<<v<<endl;
        int i=v.size()-1;
        while(i>0&&v[i]<=v[i-1])i--;
        if(i==0)
            return -1;
        int j=v.size()-1;
        while(j>0&&v[i-1]>=v[j])j--;
        swap(v[i-1],v[j]);
        cout<<v<<endl;
        reverse(v.begin()+i,v.end());
        cout<<v;
        return stoll(v)>INT_MAX?-1:stoi(v);
        
    }
};