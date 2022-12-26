/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &ma) {
        int l=0,r=ma.length()-1;
        while(l<r)
        {
            int m=(l+r)/2;
            if(ma.get(m)>ma.get(m+1))
                r=m;
            else l=m+1;
        }
        if(ma.get(l)==target)
            return l;
        int ll=0,lr=l-1,rl=l+1,rr=ma.length()-1;
        while(ll<lr)
        {
            int m=(ll+lr)/2;
            if(ma.get(m)<target)
                ll=m+1;
            else lr=m;
        }
        if(ma.get(ll)==target)
            return ll;
        while(rl<rr)
        {
            int m=(rl+rr)/2;
            if(ma.get(m)>target)
                rl=m+1;
            else rr=m;
        }
        if(ma.get(rl)==target)
            return rl;
        return -1;
    }
};