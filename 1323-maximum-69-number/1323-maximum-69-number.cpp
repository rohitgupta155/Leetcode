class Solution {
public:
    int maximum69Number (int num) {
        vector<int> a;
        int t=num;
        while(t)
        {
            a.push_back(t%10);
            t/=10;
        }
        reverse(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
            if(a[i]==6){
                a[i]=9;break;}
        num=0;
        for(int i=0;i<a.size();i++)
        {
            num=num*10+a[i];
            
        }
        return num;
        
    }
};