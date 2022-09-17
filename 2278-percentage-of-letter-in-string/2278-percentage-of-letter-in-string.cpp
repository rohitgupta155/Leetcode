class Solution {
public:
    int percentageLetter(string s, char letter) {
        vector<int>v(26,0);
        for(auto i:s)
            v[i-'a']++;
        return (v[letter-'a']*100)/s.size();
    }
};