class Solution {
public:
    bool isItPossible(string word1, string word2) {
        if(word1.size()==1&&word2.size()==1)
            return true;
        unordered_map<char,int> w1,w2;
        for(auto i:word1)
           w1[i]++;
        for(auto i:word2)
           w2[i]++;
        // if(w1.size()==w2.size())
        // {
        //     if(w1.size()>1)
        //         return true;
        //     if(w1.begin()->first==w2.begin()->first)
        //         return true;
        //     return w1.begin()->second>1&&w2.begin()->second>1;
        // }
        for(char i='a';i<='z';i++)
        {
            if(!w1.count(i))
                continue;
            w1[i]--;
            if(w1[i]==0)
                w1.erase(i);
            for(char j='a';j<='z';j++)
            {
                // if(i!=j){
                    if(w2.count(j)){
                        w1[j]++;
                        w2[j]--;
                        if(w2[j]==0)
                            w2.erase(j);
                        w2[i]++;
                        if(w1.size()==w2.size())
                            return true;
                        w2[j]++;
                        w2[i]--;
                        w1[j]--;
                        if(w2[i]==0)
                            w2.erase(i);
                        if(w1[j]==0)
                            w1.erase(j);
                        
                    }
                    
                // }
            }
            w1[i]++;
        }
        return false;
    }
};