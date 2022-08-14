class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n=a.size();
        int map[n];
        memset(map,0,sizeof(map));
        for(int i=0;i<=n;i++)
        {
            map[a[i]]++;
            if(map[a[i]]>1)
                return a[i];
        }
        return 0;
    }
};