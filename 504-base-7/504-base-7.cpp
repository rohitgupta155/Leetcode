class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string a;
        int f=0;
        if(num<0){
            f=1;
        num=-num;}
        while(num)
        {
            a=to_string(num%7)+a;
            num/=7;
        }
        if(f)
            a='-'+a;
        return a;
        
    }
};