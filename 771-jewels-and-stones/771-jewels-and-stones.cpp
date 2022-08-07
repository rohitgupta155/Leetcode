class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size(),sum=0;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<stones.size();j++)
        {
            if(jewels[i]==stones[j])
            {
                sum++;
                stones.erase(stones.begin()+j);
                j--;
            }
        }
        }
        return sum;
    }
};