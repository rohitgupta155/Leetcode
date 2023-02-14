class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        int r=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0||j>=0||r>0)
        {
            int sum=r;
            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }
            r=(sum>1)?1:0;
            sum=sum%2;
            s.append(to_string(sum));
        }
        reverse(s.begin(),s.end());
        return s;
   
    }
};