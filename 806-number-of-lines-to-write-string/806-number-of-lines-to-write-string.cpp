class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        int l=0,c=0,n=s.size();
        for(int i=0;i<n;i++)
        {
            if(c+w[s[i]-'a']<=100)
                {cout<<s[i];
                c+=w[s[i]-'a'];}
            else{
                cout<<" "<<c<<endl;
                c=0;
                l++;
                i--;
            }
            if(i==(n-1))
                {cout<<" "<<c<<endl;
                l++;
                break;}
        }
        return {l,c};
    }
};