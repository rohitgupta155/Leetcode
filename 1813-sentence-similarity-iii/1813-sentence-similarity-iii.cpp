class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if(s1==s2)
            return 1;
        vector<string> a,b;
        string c="";
        for(auto i:s1)
        {
            if(i==' '){
                a.push_back(c);
                c="";
            }
            else c+=i;
        }
        a.push_back(c);
        c="";
        for(auto i:s2)
        {
            if(i==' '){
                b.push_back(c);
                c="";
            }
            else c+=i;
        }
        b.push_back(c);
        int i=0,j=0;
        string pre,suf;
        while(i<a.size()&&j<b.size()&&a[i]==b[j])
        {
            pre+=a[i]+" ";
            i++,j++;
        }
        int i1=a.size()-1,j1=b.size()-1;
        while(i1>=i&&j1>=j && a[i1]==b[j1]){
            suf=a[i1]+" "+suf;
            i1--,j1--;
        }
        if(suf!="")
        suf.pop_back();
        else if(pre!="") pre.pop_back();
        return s1==pre+suf||s2==pre+suf;
    }
};