class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k>=arr.size())
            return *max_element(arr.begin(),arr.end());
        int i=2,w=max(arr[0],arr[1]),p=w,c=1,n=arr.size();
        while(1)
        {
           if(c==k)
                return w;
            w=max(w,arr[i]);
            i++;
            i=i%n;
            
            if(w==p)
                c++;
            else{
                p=w;
                c=1;
            }
            
        }
    }
};