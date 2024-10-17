class Solution {
public:
    int maximumSwap(int num) {
        string a=to_string(num);
        int ans=num;
        for(int i=0;i<a.size();i++){
            string b=a;
            for(int j=i;j<a.size();j++){
                swap(b[i],b[j]);
                if(stoi(b)>ans)
                    ans=stoi(b);
                b=a;
            }
        }
        return ans;
    }
};