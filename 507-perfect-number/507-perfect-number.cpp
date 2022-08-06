class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i*i<=num;i++)
        {
            if(num%i==0)
            {
                sum+=i;
                if(i*i!=num)
                    sum+=num/i;
            }
        }
        if(sum==2*num)
            return true;
        return false;
    }
};