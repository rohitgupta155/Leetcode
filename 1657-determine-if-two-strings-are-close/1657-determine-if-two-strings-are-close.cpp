class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        unordered_set<char> a,b;
        unordered_map<char,int> m,n;
        unordered_map<int,int> c;
        for(auto i:word1)
            m[i]++,a.insert(i);
        for(auto i:word2)
            n[i]++,b.insert(i);
        if(a!=b)
            return false;
        for(auto i:m)
            c[i.second]++;
        for(auto i:n)
            c[i.second]--;
        for(auto i:c)
            if(i.second)return false;
        return true;
    }
};