class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int top=-1,reach=0,down;
        for(int i=0;i<arr.size();i++)
        {
            if(reach==1)
            {
                if(arr[i]>=top||arr[i]>=down)
                    return false;
                down=arr[i];
            }
            else{
                if(arr[i]==top)
                    return false;
                if(arr[i]>top){
                    top=arr[i];
                    if(i==(arr.size()-1))
                        return false;
                }
                else{
                    if(i-1==0)
                        return false;
                    reach=1;
                    down=arr[i];
                    if(i==(arr.size()-1))
                        return true;
                }
            }
        }
        return true;
    }
};