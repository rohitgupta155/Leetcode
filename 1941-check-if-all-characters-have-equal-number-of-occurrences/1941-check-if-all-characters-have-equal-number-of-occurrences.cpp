class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> v(26,0);
        int m=0;
        for(char i:s)
        {
            v[i-'a']++;
            m=max(m,v[i-'a']);
        }
        for(int i:v)
        {
            if(i!=0)
                if(i!=m)
                    return false;
        }
        return true;
            
    }
};