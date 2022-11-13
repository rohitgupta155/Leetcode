class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> a(boxes.size(),0);
        for(int i=0;i<boxes.size();i++)
            for(int j=0;j<boxes.size();j++)
            {
                if(i!=j&&boxes[j]=='1'){
                    a[i]+=abs(i-j);
                }
            }
        return a;
    }
};