class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans="";
        for(auto i:dictionary){
            int k=0;
            for(int j=0;j<s.size()&&k<i.size();j++)
            {
                if(s[j]==i[k])
                    k++;
            }
            if(k==i.size())
            {
                if(i.size()>ans.size()||(i.size()==ans.size()&&(i.compare(ans))<0))
                    ans=i;
            }
        }
        return ans;
    }
};