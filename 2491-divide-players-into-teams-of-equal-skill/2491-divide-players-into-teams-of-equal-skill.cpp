class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long tot=accumulate(skill.begin(),skill.end(),0);
        if(tot%(skill.size()/2))
            return -1;
        unordered_map<int,int> m;
        for(auto i:skill)
            m[i]++;
        long long req=tot/(skill.size()/2),ans=0;
        for(auto i:skill)
        {
            // cout<<i<<" ";
            if(m[i])
            {
                // cout<<req-i<<endl;
                if(m[req-i])
                {
                    // cout<<"exists"<<endl;
                    if(req==2*i)
                    {
                        if(m[i]>=2)
                        {
                            // cout<<i<<" "<<i<<endl;
                            m[i]-=2;
                            if(m[i]==0)
                                m.erase(i);
                            ans+=i*i;
                        }
                        else return -1;

                    }else{
                        // cout<<i<<" "<<req-i<<endl;
                        m[i]--;
                        m[req-i]--;
                        if(m[i]==0)
                                m.erase(i);
                        if(m[req-i]==0)
                                m.erase(req-i);
                        ans+=i*(req-i);
                    }
                    

                }
                else return -1;
            }
        }
        return ans;
    }
};