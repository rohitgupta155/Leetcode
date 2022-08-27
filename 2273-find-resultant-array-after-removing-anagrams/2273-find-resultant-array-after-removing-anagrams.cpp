class Solution {
public:
    vector<string> removeAnagrams(vector<string>& w) {
       
        for(int i=1;i<w.size();i++){
            string st=w[i-1];
            string a=w[i];
            sort(a.begin(),a.end());
            sort(st.begin(),st.end());
         if(a==st){
         w.erase(w.begin()+i);
             i--;
         }
        }
        return w;
    }
};