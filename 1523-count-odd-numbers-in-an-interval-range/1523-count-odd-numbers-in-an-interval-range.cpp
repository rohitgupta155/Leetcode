class Solution {
public:
    int countOdds(int low, int high) {
        if((high-low+1)%2==0)
        {
            return (high-low)/2+1;
        }
        if(low%2)
        {
            return (high-low)/2+1;
        }
        return (high-low)/2;

    }
};