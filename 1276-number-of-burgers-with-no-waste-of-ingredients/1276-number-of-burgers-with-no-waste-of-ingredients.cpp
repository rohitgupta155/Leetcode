class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices%2)
            return {};
        int y=4*cheeseSlices-tomatoSlices;
        y/=2;
        int x=cheeseSlices-y;
        if(x>=0&&y>=0)
            return {x,y};
        return {};
    }
};