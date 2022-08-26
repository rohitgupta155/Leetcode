class Solution {
public:
    bool reorderedPowerOf2(int nu) {
        if(nu==1)
            return true;
        vector<string> n;
        string s=to_string(nu);
        sort(s.begin(),s.end());
        int num=1;
        for(int i=1;i<=30;i++)
        {
            num=num<<1;
            string a=to_string(num);
            sort(a.begin(),a.end());
            if(a==s)
                return true;
            
        }
        return false;
    }
};