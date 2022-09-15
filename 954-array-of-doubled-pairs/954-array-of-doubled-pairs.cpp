class Solution {
public:
    bool canReorderDoubled(vector<int>& c) {
       unordered_map<int,int> a;
        for(auto i:c)
            a[i]++;
sort(c.begin(),c.end());
        for(auto k:c)
        {
            if(a[k])
                if(a[k*2])
                { a[k*2]--;
                 a[k]--;
                 } 
            else if(k%2==0&&a[k/2])
            {a[k/2]--;
                a[k]--;
                
            }
               else return false;
        }
        return true;
    }
};