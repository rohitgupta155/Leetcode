class Solution {
public:
    void sortColors(vector<int>& a) {
        int r=0,w=0,b=0,n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                r++;
            else if(a[i]==1)
                w++;
            else
                b++;
        }
        for(int i=0;i<n;i++)
        {
            if(r!=0){
                a[i]=0;
                r--;}
            else if(w!=0){
                a[i]=1; w--;
            }
            else
                a[i]=2;
        }
    }
};