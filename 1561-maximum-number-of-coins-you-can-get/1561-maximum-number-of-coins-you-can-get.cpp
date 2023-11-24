class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s=0;
        for(int i=piles.size()-2;i>=((int)piles.size()/3);i-=2)
            s+=piles[i];
        return s;
    }
};