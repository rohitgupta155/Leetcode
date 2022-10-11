class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> m;
        for(int i:arr)
        {
            m[i]++;
        }
        int i=1,j=0;
        while(i++)
            if(!m[i-1]){
                j++;
                if(j==k)
                    return i-1;
            }
    return 0;
}};