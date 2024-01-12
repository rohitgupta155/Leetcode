class Solution {
public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        map<string,vector<int>> m;
        for(int i=0;i<keyName.size();i++)
        {
            m[keyName[i]].push_back(stoi(keyTime[i].substr(0,2))*60+stoi(keyTime[i].substr(3,2)));
            // cout<<keyName[i]<<" "<<m[keyName[i]].back()<<endl;
        }
        vector<string> ans;
        for(auto i:m){
            if(i.second.size()>2)
            {
                vector<int> t=i.second;
                sort(t.begin(),t.end());
                bool f=false;
                for(int j=2;j<t.size();j++)
                {
                    if(t[j]-t[j-2]<=60)
                    {
                        f=true;
                        break;
                    }
                }
                if(f)
                    ans.push_back(i.first);
            }
        }
        return ans;
    }
};