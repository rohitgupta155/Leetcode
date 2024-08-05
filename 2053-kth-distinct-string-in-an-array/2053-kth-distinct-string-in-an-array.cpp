class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> m;
        for(auto i:arr)
            m[i]++;
        int c=0;
        for(auto i:arr)
        {
            if(m[i]==1)
                c++;
            if(c==k)
                return i;
        }
        return "";
    }
};