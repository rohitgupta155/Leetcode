class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int power) {
        int i=0,j=token.size()-1,points=0,ans=0;
        sort(token.begin(),token.end());
        while(i<=j&&((power-token[i])>=0||points>0))
        {
            while(i<=j&&(power-token[i])>=0)
            {
                points++;
                power-=token[i];
                i++;
            }
            ans=max(ans,points);
            if(i<=j&&ans>0)
            {
                power+=token[j];
                points--; 
                j--;

            }
        }
        return ans;
        
    }
};