class Solution {
public:
    int numUniqueEmails(vector<string>& e) {
        unordered_map<string,int> m;
        for(string i:e)
        {
            string a;
            for(int j=0;j<i.size();j++)
            {
                if(i[j]=='.')
                    continue;
                else if(i[j]=='+')
                {
                    while(i[j+1]!='@')
                        j++;
                }
                else if(i[j]=='@')
                    {
                    string t=i.substr(j,i.size()-j);
                    a+=t;
                    break;}
                else a+=i[j];
            }
            m[a]++;
        }
        return m.size();
        
    }
};