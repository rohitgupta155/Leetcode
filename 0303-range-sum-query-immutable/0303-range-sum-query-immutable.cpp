class NumArray {
public:
    vector<int> a;
    NumArray(vector<int>& nums) {
        a=nums;
    }
    
    int sumRange(int left, int right) {
        return accumulate(a.begin()+left,a.begin()+right+1,0);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */