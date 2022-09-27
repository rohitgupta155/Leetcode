class Solution {
public:
    int thirdMax(vector<int>& n) {
        if(n.size()<=2)
            return max(n.front(),n.back());
        sort(n.begin(),n.end());
        map<int,int,greater<int>> m;
        for(int i=0;i<n.size();i++)
        m[n[i]]++;
        if(m.size()<=2){
            auto i=m.begin();
           return i->first; }
        int c=1;
        for(auto i:m)
            {
            if(c==3)
                return i.first;
             
                c++;}
        return 0;
    }
};