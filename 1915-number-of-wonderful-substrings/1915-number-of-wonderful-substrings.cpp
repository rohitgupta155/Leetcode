class Solution {
public:
    long long wonderfulSubstrings(string word) {
      int n = word.length();
    vector<int> count(1 << 10, 0);
    long long result = 0;
    int mask = 0;
    count[0] = 1; 
    for (char c : word) {
        mask ^= 1 << (c - 'a');
        result += count[mask];
        for (int i = 0; i < 10; ++i) {
            result += count[mask ^ (1 << i)];
        }
        count[mask]++;
    }

    return result;   
    }
};