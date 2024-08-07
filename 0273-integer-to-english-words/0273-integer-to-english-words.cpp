class Solution {
public:
    unordered_map<int,string> m{{1,"One"},{2,"Two"},{3,"Three"},{4,"Four"},{5,"Five"},{6,"Six"},{7,"Seven"},{8,"Eight"},{9,"Nine"},{10,"Ten"},{11,"Eleven"},{12,"Twelve"},{13,"Thirteen"},{14,"Fourteen"},{15,"Fifteen"},{16,"Sixteen"},{17,"Seventeen"},{18,"Eighteen"},{19,"Nineteen"},{20,"Twenty"},{30,"Thirty"},{40,"Forty"},{50,"Fifty"},{60,"Sixty"},{70,"Seventy"},{80,"Eighty"},{90,"Ninety"}};
    string numberToWords(int num) {
        if(!num)
            return "Zero";
        string ans="";
        if(num>=1000000000)
        {
            ans+=help(num/1000000000)+"Billion ";
            num=num%1000000000;
        }
        if(num>=1000000)
        {
            ans+=help(num/1000000)+"Million ";
            num=num%1000000;  
        }
        if(num>=1000)
        {
            ans+=help(num/1000)+"Thousand ";
            num=num%1000;
        }
        if(num)
        {
            ans+=help(num);
        }
        ans.pop_back();
        return ans;
    }
    
    string help(int n)
    {
        string ans;
        if(n>=100){
            ans+=m[n/100]+" Hundred ";
            n=n%100;
        }
        if(n>=10)
        {
            if(n%10==0||n<20)
            {  
                ans+=m[n]+" ";
                n=0;
            }
            else{
                ans+=m[(n/10)*10]+" ";
                n=n%10;
            }
        }
        if(n)
        {
            ans+=m[n]+" ";
        }
        return ans;
    }
    
    
};