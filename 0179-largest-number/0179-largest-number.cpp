class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(auto i:nums)
            s.push_back(to_string(i));
        sort(s.begin(),s.end(),[] (string a,string b)->bool{
            return a+b>b+a;
        });
        if(s[0]=="0")
            return "0";
        string a;
        for(auto i:s)
            a+=i;
        return a;
    }
};