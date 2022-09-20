class Solution {
public:
    string reverseStr(string s, int k) {
        if(k>=s.size()){
            reverse(s.begin(),s.end());
            return s;}
        int n=s.size();
        for(int i=0;i<n;i+=(2*k))
           { if((n-i)<=k)
                {reverse(s.begin()+i,s.end());
            break;}
            reverse(s.begin()+i,s.begin()+i+k);}
        
        return s;
    }
};