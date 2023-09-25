class Solution {
public:
    vector<int> constructRectangle(int area) {
        int n=sqrt(area)+1;
        while((n--)>1)
        {
            if(area%n==0)
                return {area/n,n};
        }
        return {area,1};
    }
};