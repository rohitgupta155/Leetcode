class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // int n=letters.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(letters[i]>target)
        //         return letters[i];
        // }
        // return letters[0];    accepted but O(N)
        int l=0,r=letters.size()-1;
        while(l<=r){
            int m=(r-l)/2+l;
            if(letters[m]<=target)
                l=m+1;
            else
                r=m-1;
        }
        if(l>=letters.size())
            return letters[0];
        return letters[l]>target?letters[l]:letters[0];
    }
};