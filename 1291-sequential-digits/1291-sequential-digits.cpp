class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string num="123456789";
        int n=to_string(low).size();
        int m=to_string(high).size();
        for(int i=n;i<=m;i++)
        {
            for(int j=0;j<=9-i;j++)
            {
                int t=stoi(num.substr(j,i));
                if(t>=low&&t<=high)
                    ans.push_back(t);
            }
        }
        return ans;
    }
};