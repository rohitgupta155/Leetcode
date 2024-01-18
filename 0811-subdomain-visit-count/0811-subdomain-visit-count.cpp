class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
     vector<string> ans;
     unordered_map<string,int> m;
        for(auto i:cpdomains)
        {
            string count;
            string d1,d2,d3;
            int j=0;
            while(i[j]!=' '){
                count+=i[j];
                j++;
            }
            j++;
            int c=stoi(count);
            while(i[j]!='.'){
                d1+=i[j];
                j++;
            }
            j++;
            while(j<i.size()&&i[j]!='.')
            {
                d2+=i[j];
                j++;
            }
            j++;
            if(j<i.size())
            {
                while(j<i.size()){
                    d3+=i[j];
                    j++;
                }
            }
            if(d3!="")
            {
                m[d3]+=c;
                m[d2+'.'+d3]+=c;
                m[d1+'.'+d2+'.'+d3]+=c;
            }
            else{
                m[d2]+=c;
                m[d1+'.'+d2]+=c;
            }
        }
        for(auto i:m)
        {
            ans.push_back(to_string(i.second)+" "+i.first);
        }
        return ans;
    }
};