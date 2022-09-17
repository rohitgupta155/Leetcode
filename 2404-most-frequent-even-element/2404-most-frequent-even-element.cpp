class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> a;
			/*Used unordered map to count the even element's occurrence*/
        for(auto i:nums)
          { if(i%2==0)
            a[i]++;}
			 if(a.size()==0)   //Checking if we have a element or not after checking if not return -1
            return -1;
        int m=INT_MIN;
	   /* Found the max frequency from map*/
        for(auto i:a)
            m=max(m,i.second);
        vector<int>v;   //Assigned new vector to store elements with max frequency
        for(auto i:a){
            if(i.second==m)
                v.push_back(i.first);
           
        } int mi=INT_MAX;
            for(auto i:v)        //Finding minimum element from elements with maximum frequency
                mi=min(i,mi);
       
            return mi;   //return minimum even element
    }
};