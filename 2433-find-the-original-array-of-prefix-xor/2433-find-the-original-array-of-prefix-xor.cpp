class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> a(pref.size());
        a[0]=pref[0];
        int c=a[0];
        for(int i=1;i<pref.size();i++){
            a[i]=pref[i]^c;
            c^=a[i];
    }
        return a;
    }
};