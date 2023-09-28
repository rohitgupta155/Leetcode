class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        // if(a.size()==1)
        //     return a;
        // int n=a.size();
        // vector<int> ans;
        // for(int i=0;i<n;i++)
        //     if(a[i]%2==0)
        //         ans.push_back(a[i]);
        // for(int i=0;i<n;i++)
        //     if(a[i]%2==1)
        //         ans.push_back(a[i]);

        int i=0,n=a.size()-1;
        vector<int> ans(a.size());
        for(auto j:a)
        {
            if(j%2)
                ans[n--]=j;
            else
                ans[i++]=j;
        }
        return ans;
    }
};