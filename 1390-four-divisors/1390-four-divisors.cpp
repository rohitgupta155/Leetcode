class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i:nums)
        {
            int c=0,t=0;
            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                  { if(i/j==j)
                  t+=j,c++;
                  else t+=(j+i/j),c+=2;
                  }
            }
            if(c==4)
                sum+=t;
            
        }
        return sum;
    }
};