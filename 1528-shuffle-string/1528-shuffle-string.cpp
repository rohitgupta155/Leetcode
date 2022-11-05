class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a=s;
        int i=0;
        for(auto j:s)
        {
            a[indices[i++]]=j;
        }
        return a;
    }
};