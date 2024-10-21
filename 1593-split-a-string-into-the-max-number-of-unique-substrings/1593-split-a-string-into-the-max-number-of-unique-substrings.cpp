class Solution {
public:
    int ans=INT_MIN;
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        string a;
        int j=0;
        for(auto i:s){
            a+=i;
            st.clear();
            st.insert(a);
            j++;
            find(j,s,st);
        }
        return ans;
    }
    void find(int i,string s,unordered_set<string> st){
        if(i>=s.size()){
            ans=max((int)st.size(),ans);
            return;
        }
        string a;
        for(int j=i;j<s.size();j++){
            a+=s[j];
            if(st.find(a)!=st.end()) continue;
            st.insert(a);
            find(j+1,s,st);
            st.erase(a);
        }
        
    }
};