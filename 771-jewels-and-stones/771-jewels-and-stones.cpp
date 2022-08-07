struct node
{
    int v=0;
};  
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,node> m;
        int n=stones.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            m[stones[i]].v++;
        }
        n=jewels.size();
        for(int i=0;i<n;i++)
        {
            sum+=m[jewels[i]].v;
        }
        return sum;
    }
};