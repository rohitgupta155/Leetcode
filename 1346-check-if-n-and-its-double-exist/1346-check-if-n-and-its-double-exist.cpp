class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> s;
        for(int i=0;i<arr.size();i++)
        {
            if(s.count(arr[i]*2)||(s.count(arr[i]/2)&&arr[i]%2==0))
                return true;
            s[arr[i]]++;
        }
        return false;
    }
};