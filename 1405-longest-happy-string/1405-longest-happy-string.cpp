class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> p;
        if(a)
            p.push({a,'a'});
        if(b)
            p.push({b,'b'});
        if(c)
            p.push({c,'c'});
        string ans="";
        while(!p.empty())
        {
            auto i=p.top();
            p.pop();
            if(ans.size()>=2){
                if(i.second!=ans.back())
                {
                    ans+=i.second;
                    if(i.first>1)
                    p.push({i.first-1,i.second});
                }
                else{
                    if(ans.back()==ans[ans.size()-2])
                    {
                        if(p.size()){
                            auto j=p.top();
                            p.pop();
                            ans+=j.second;
                            if(j.first>1)
                                p.push({j.first-1,j.second});
                            p.push(i);
                        }
                        else break;
                    }
                    else{
                        ans+=i.second;
                        if(i.first>1)
                        p.push({i.first-1,i.second});
                    }
                }
            }
            else{
                ans+=i.second;
                if(i.first>1)
                    p.push({i.first-1,i.second});   
            }
        }
        return ans;
    }
};