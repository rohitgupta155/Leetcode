class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int c=0;
        if(start<destination)
        for(int i=start;i<destination;i++)
        {
            c+=distance[i];
        }
        else if(start>destination)
        for(int i=destination;i<start;i++)
        {
            c+=distance[i];
        }
        
        int r=accumulate(distance.begin(),distance.end(),0);
        return min(c,r-c);
    }
};