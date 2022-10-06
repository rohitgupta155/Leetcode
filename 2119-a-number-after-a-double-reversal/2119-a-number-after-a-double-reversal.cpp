class Solution {
public:
    bool isSameAfterReversals(int num) {
        string a=to_string(num);
        reverse(a.begin(),a.end());
        int i=stoi(a);
        a=to_string(i);
        reverse(a.begin(),a.end());
        return num==stoi(a);
    }
};