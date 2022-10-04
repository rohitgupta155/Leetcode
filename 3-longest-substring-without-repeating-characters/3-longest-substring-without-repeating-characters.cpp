class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m=0,l=s.size();
        unordered_set<int> a;
        int j=0;
        for(int i=0;i<l;i++)
        {
            if(a.find(s[i])==a.end())
                a.insert(s[i]);
            else{
                int len=a.size();
                cout<<len<<" "<<i<<endl;
                m=max(m,len);
                a.clear();
                i=j;
                j=i+1;
                cout<<i<<endl;
            }
        }
        int len=a.size();
        cout<<len;
        m=max(m,len);
        return m;
    }
};