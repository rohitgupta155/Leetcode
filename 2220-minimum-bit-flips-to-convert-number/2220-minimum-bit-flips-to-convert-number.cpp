class Solution {
public:
    int minBitFlips(int a, int b) {
        string A=DecimalToBinaryString(a);   
        string B=DecimalToBinaryString(b);
        int count=0;
        for(int i=0;i<32;i++)
        {
            if(A[i]!=B[i])
                count++;
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
