class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        for(int i=0;i<strs[0].size();i++){
            char a=strs[0][i];
            int count=0;
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]==a)
                    count++;
                else break;
            }
            if(count==strs.size())
                s.push_back(a);
            else break;
        }
        return s;
                
        }
};