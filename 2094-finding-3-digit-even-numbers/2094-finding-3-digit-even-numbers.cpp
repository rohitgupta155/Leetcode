class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> ans;
        for(int i=0;i<digits.size();i++)
            for(int j=0;j<digits.size();j++)
                for(int k=0;k<digits.size();k++)
                {
                    if(i!=j&&j!=k&&i!=k&&digits[i]!=0)
                    {
                        int t=(digits[i]*100+digits[j]*10+digits[k]);
                        if(t%2==0)
                            ans.insert(t);
                    }
                }

        vector<int> a(ans.begin(),ans.end());
        return a;
    }
};