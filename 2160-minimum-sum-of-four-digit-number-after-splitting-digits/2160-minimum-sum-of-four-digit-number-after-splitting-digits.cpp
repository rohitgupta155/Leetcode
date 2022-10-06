class Solution {
public:
    int minimumSum(int num) {
        vector<int> m;
        while(num)
        {
            m.push_back(num%10);
            num/=10;
        }
        sort(m.begin(),m.end());
        int a=m[0]*10+m[2];
        int b=m[1]*10+m[3];
        return a+b;
    }
};