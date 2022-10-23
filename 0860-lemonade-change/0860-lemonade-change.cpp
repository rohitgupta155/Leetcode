class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> m;
        for(int i:bills)
        {
            if(i==5)
                m[i]++;
            else if(i==10)
            {
                if(m.count(5))
                   { m[5]--;
                    if(m[5]==0)
                        m.erase(5);
                    m[i]++;}
                else return false;
            }
            else{
                if(m.count(10)&&m.count(5))
                    {m[10]--;
                    m[5]--;
                     if(m[5]==0)
                        m.erase(5);
                     if(m[10]==0)
                        m.erase(10);
                    }
                else if(m[5]>=3){
                    m[5]-=3;
                    if(m[5]==0)
                        m.erase(5);}
                else return false;
            }
        }
        return true;
    }
};