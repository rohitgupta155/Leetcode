class Solution {
public:
    int secondHighest(string s) {
        set<char,greater<int>> a;
        for(auto i:s)
            if(i<='9'&&i>='0')
                a.insert(i);
        if(a.size()<2)
            return -1;
        int c=1;
        for(auto i:a)
          if(c==2)
                return i-'0';
        else c++;
        return -1;
        
    }
};