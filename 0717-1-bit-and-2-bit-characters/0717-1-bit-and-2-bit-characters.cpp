class Solution {
public:
    bool isOneBitCharacter(vector<int>& a) {
        
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]==0&&i==n-1)
                return true;;
            if(a[i]==1)
                i++;            
        }
         return false;
    }
};