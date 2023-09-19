class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n=arr.size();
        // int map[n];
        // memset(map,0,sizeof(map));
        // for(int i=0;i<=n;i++)
        // {
        //     map[a[i]]++;
        //     if(map[a[i]]>1)
        //         return a[i];
        // }
        // return 0;              //using hash map
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        for(int i=0;i<n;i++)
            if(arr[i]/n>1)
                return i;         //array modification
        return 0;
    }
};