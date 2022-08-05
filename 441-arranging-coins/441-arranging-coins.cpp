class Solution {
public:
    int arrangeCoins(long int n) {
        long int c=1,i=0,row=0;
        while(c)
        {
            if(i>n)
            return row-1; 
            else if(i==n)
                return row;
            i=i+c;
            c++;
            row++;

        }
        return 0;
    }
};