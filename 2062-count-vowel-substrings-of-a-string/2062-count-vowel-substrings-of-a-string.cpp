class Solution {
public:
    bool isvowel(char x)
    {
        if (x == 'a' || x == 'e' || x == 'i' ||  
        x == 'o' || x == 'u')
            return true;
        return false;
    }
    int countVowelSubstrings(string word) {
        if(word.size()<5)
            return 0;
        int ans=0;
        int sum=0;
        unordered_set<char> s;
        for(int i=0;i<word.size()-4;i++)
        {
            for(int j=i;j<word.size();j++)
            {
                if(!isvowel(word[j]))
                {
                ans+=sum;
                sum=0;
                s.clear();
                break;
                }
            else{
                s.insert(word[j]);
                if(s.size()==5)
                    sum++;
            }
            }
            s.clear();
        }
        ans+=sum;
        // if(a!="")
        // m[a]++;
        // int sum=0;
        // for(auto i:m)
        //     {
        //     int count=i.second*(i.first.size()*(i.first.size()+1)/2-(4*i.first.size()-6));
        //      cout<<i.first<<" "<<i.second<<" "<<count<<endl;
        // sum+=count;
        // }
        return ans;
    }
};