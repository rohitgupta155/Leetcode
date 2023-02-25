class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int> m;
        for(auto i:digits)
            m[i]++;
        vector<int> ans;
        for(int i=100;i<1000;i++)
        {
            if(i%2==0){
            unordered_map<int,int> t;
            int temp=i;
            while(temp>0)
            {
                t[temp%10]++;
                temp/=10;
            }
            bool flag=true;
            for(auto j:t)
            {
                if(j.second>m[j.first])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back(i);
            }
        }
        return ans;
    }
};