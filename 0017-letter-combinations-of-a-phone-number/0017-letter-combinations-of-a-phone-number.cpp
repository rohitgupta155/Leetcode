class Solution {
public:
    unordered_map<int,string> m={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
    string a;
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="")
            return {};
        a=digits;
        for(auto i:m[digits[0]-'0'])
        {
            string c={i};
            find(c,1);
        }
     return ans;
    }
    
    void find(string curr,int j)
    {
        if(j==a.size())
            {
                ans.push_back(curr);
                return;
            }
            for(auto i:m[a[j]-'0'])
            {  
            find(curr+i,j+1);
            }
         
    }
};