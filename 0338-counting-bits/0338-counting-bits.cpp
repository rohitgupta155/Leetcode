class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0)
            return {0};
        else if(n==1)
            return {0,1};
        else if(n==2)
            return {0,1,1};
        else if(n==3)
            return {0,1,1,2};
        else if(n==4)
            return {0,1,1,2,1};
        vector<int> ans(n+1);
        ans[0]=0,ans[1]=1,ans[2]=1,ans[3]=2,ans[4]=1;
        int t=4,nt=8;
        for(int i=5;i<=n;i++)
        {
            if(i==nt)
            {
                ans[i]=1;
                t=i;
                nt*=2;
            }
            if(i%2)
                ans[i]=ans[i-1]+1;
            else
            ans[i]=1+ans[i-t];
            
        }
        return ans;
    }
};