class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char,int> m;
        vector<string> ans;
        m={{'q',1},{'w',1},{'e',1},{'r',1},{'t',1},{'y',1},{'u',1},{'i',1},{'o',1},{'p',1},{'a',2},{'s',2},{'d',2},{'f',2},{'g',2},{'h',2},{'j',2},{'k',2},{'l',2},{'z',3},{'x',3},{'c',3},{'v',3},{'b',3},{'n',3},{'m',3}};
        int c=0;
        for(auto i:words)
        {
            for(auto j:i)
            c+=m[tolower(j)];
            cout<<c<<" "<<i<<endl;
            if(c==(m[tolower(i[0])]*i.size()))
                ans.push_back(i);
            c=0;
        }
        return ans;
    }
};