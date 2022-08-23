class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        if(a.size()==1)
            return a;
        int n=a.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
            if(a[i]%2==0)
                ans.push_back(a[i]);
        for(int i=0;i<n;i++)
            if(a[i]%2==1)
                ans.push_back(a[i]);
//         queue<int>o,e;
//         int n=a.size()-1,j=0;
//         while(j<n)
// //         {
// //             if(a[j]%2==1&&a[n]%2==0)
// //                 swap(a[j++],a[n--]);
// //             if(a[j]%2==0)
// //             {
// //                 j++;
// //             }
// //             if(a[n]%2==1)
// //                 n--;
            
// //         }
        //     for(int i=0;i<n;i++)
        // {
        //     if(a[i]%2==0)
        //         e.push(a[i]);
        //         else o.push(a[i]);
        // }
        // while(!e.empty())
        // {
        //     a[j++]=e.front();
        //     e.pop();
        // }
        // while(!o.empty())
        // {
        //     a[j++]=o.front();
        //     o.pop();
        // }
        
        return ans;
    }
};