class Solution {
public:
    string longestWord(vector<string>& words) {
        unordered_set<string> s(words.begin(),words.end());
        string ans="";
         for(string i:words)
         {
             int j;
             for( j=0;j<i.size();j++)
             {
                 if(s.find(i.substr(0,j+1))==s.end())
                     break;
             }
             if(j==i.size())
             {
                 if(i.size()>ans.size()||(i.size()==ans.size()&&(i.compare(ans))<0))
                    ans=i;
             }         }
        return ans;
    }
};