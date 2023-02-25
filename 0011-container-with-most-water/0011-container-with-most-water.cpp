class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1,a=INT_MIN,area;
        while(s<e){
            if(height[s]<=height[e]){
                area=height[s]*(e-s);
                s++;
            }
            else{area=height[e]*(e-s);e--; }
            a=max(a,area);
        }
        return a;
    }
};