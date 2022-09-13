class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int i1=0,i2,sum=0,nu=n.size();
        if(n[0]+n[1]==target)
            return{1,2};
        i2=nu-1;
        while(n[i2]>target)
            i2--;
        while(i1<i2)
        {
            sum=(n[i1++]+n[i2]);
            cout<<"n["<<i1-1<<"]+n["<<i2<<"]="<<sum<<endl;
            if(sum==target)
                break;
            if(sum>target)
                {i1--;
            i2--;}
            else if(i2==(nu-1))
                i1++;
            else i2++;
        }
        return {i1,i2+1};
    }
};