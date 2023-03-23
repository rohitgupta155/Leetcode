class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> s;
        for(int &i:answers)
            s[i]++;
        int ans=0;
        for(auto i:s)
        {
            if(i.first==0)
                ans+=i.second;
            else{
            if(i.second<=i.first+1)
                ans+=i.first+1;
            else{
                if(i.first==1)
                    ans+=(i.second/2)*2+(i.second%2)*2;
                else
                ans+=(i.second/(i.first+1))*(i.first+1)+i.first+1;                
            }}
        }
        return ans;
    }
};