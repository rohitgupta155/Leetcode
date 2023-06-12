class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i:nums)
            m[i]++;
        int c=0;
        for(auto i:nums)
        {
            if(2*i==k)
            {
                if(m[i]>=2)
                {
                    c++;
                    m[i]-=2;
                    
                }
                if(m[i]<=1)
                    m.erase(i);
            }
            if(m.count(i)&&m.count(k-i))
            {
                    m[i]--;
                    m[k-i]--;
                    c++;
                    if(m[i]==0)
                       { m.erase(i);
                         }
                        if(m[k-i]==0)
                          {  m.erase(k-i);
                        }
                    }
         }
        
        return c;
    }
};