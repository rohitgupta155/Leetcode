class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> c;
        int sum=0;
        for(auto i:chars)
            c[i]++;
        for(auto i:words){
            unordered_map<char,int> j;
            for(auto k:i)
                j[k]++;
            bool f=true;
            for(auto k:i)
                if(c[k]<j[k])
                    {f=false;
                    break;}
            if(f)sum+=i.size();
                    }
        return sum;
    }
};