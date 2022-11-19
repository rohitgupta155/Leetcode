class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a=(ay2-ay1)*(ax2-ax1);
        int b=(by2-by1)*(bx2-bx1);
        int l=max(ax1,bx1);
        int r=min(ax2,bx2);
        int xo=r-l;
        int t=min(ay2,by2);
        int d=max(ay1,by1);
        int yo=t-d;
        int ao=0;
        if(xo>0&&yo>0)
            ao=xo*yo;
        return a+b-ao;
    }
};