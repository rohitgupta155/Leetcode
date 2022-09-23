class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n=0;
        unordered_map<string,int> m;
         for(auto k:messages)
         {
             for(auto i:k)
             {
                 if(i==' ')
                 m[senders[n]]++;
             }
                 m[senders[n]]++;
             n++;
         }
        int ma=0;
        for(auto i:m)
            ma=max(ma,i.second);
        string a;
        for(auto i:m)
        {
            if(ma==i.second)
                {a=max(i.first,a);}
        }
        return a;
    }
};