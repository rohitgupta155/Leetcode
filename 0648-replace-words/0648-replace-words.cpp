class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> r(dictionary.begin(),dictionary.end());
        string ans="",t="";
        bool found=false;
        for(auto i:sentence)
        {
            if(i==' ')
            {
                if(!found)
                    ans+=(t+" ");
                t="";
                found=false;
            }
            else{
            t+=i;
                if(r.find(t)!=r.end()&&!found)
                {
                    ans+=(t+" ");
                    found=true;
                }
            }
            
        }
        if(!found)
            ans+=(t+" ");
        ans.pop_back();
        return ans;
    }
};