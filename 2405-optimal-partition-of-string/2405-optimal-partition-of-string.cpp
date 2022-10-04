class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> m;
        int c=0;
       for(char i:s)
       {
           if(m.count(i))
           {
               c++;
               m.clear();
               m[i]++;
           }
           else m[i]++;
       }
       if(m.size())
           c++;
        return c;
    }
};