class Solution {
public:
    bool check(char x)
    {
        if(x == 'a' || x == 'e' || x == 'i' ||x == 'o' || x == 'u' || x == 'A' ||x == 'E' || x == 'I' || x == 'O' || x == 'U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        { 
            while(i<s.size()&&!check(s[i]))
               { i++;}
            while(j>=0&&!check(s[j]))
                {j--;}
            if(i<j)
            swap(s[i++],s[j--]);
        }
                
     return s;   
    }
};