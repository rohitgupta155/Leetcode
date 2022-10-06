class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> m(4);
        m['R']=m['L']=m['U']=m['D']=0;
        for(char i:moves)
            m[i]++;
        if(m['R']==m['L']&&m['U']==m['D'])
            return true;
        return false;
    }
};