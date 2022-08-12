class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int r=0;
        for(int i=num.size()-1;i>=0;i--)
        {
            num[i]=num[i]+k%10+r;
            r=0;
            if(num[i]>=10){
                r=num[i]/10;
                num[i]=num[i]%10;
            }
            k=k/10;
        }
        if(r+k>0)
            if(r+k<10)
            num.insert(num.begin(),r+k);
        else{
            int sum=r+k;
            while(sum>0)
            {
                num.insert(num.begin(),sum%10);
                sum/=10;
            }
        }
        return num;
    }
};