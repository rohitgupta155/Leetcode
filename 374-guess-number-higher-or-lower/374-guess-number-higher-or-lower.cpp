/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=0,mid,end=n;
        while(1)
        {
            mid=(end-low)/2+low;
            int c=guess(mid);
            if(c==0)
                return mid;
            if(c==-1)
            {
                end=mid-1;
            }
            else if(c==1)
            {
                low=mid+1;
            }
        }
    }
};