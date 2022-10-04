class Solution {
public:
    long long countVowels(string word) {
        long long a=0;
        int j=0;
        long long n=word.size();
        for(auto i:word)
        {
            if(is_vowel(i))
                {
                a+=((j+1)*(n-j));}
            j++;
        }
        return a;
    }
    bool is_vowel(char i)
    {
        if(i=='a'||i=='e'||i=='o'||i=='i'||i=='u')
            return true;
        return false;
    }
};