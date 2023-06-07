class Solution {
public:
    int minFlips(int a, int b, int c) {
        string A=DecimalToBinaryString(a);   
        string B=DecimalToBinaryString(b);
        string C=DecimalToBinaryString(c);
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(A[i]=='0'&&B[i]=='0'&&C[i]!='0')
                count++;
            if(C[i]=='0')
            {
                if(A[i]=='1')
                    count++;
                if(B[i]=='1')
                    count++;
            }
            
        }
       return count;
    }
   string DecimalToBinaryString(int a)
{
    string binary = "";
    int mask = 1;
    for(int i = 0; i < 31; i++)
    {
        if((mask&a) >= 1)
            binary = "1"+binary;
        else
            binary = "0"+binary;
        mask<<=1;
    }
    return binary;
}
};