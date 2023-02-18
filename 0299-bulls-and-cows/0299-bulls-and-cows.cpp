class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> m;
        for(auto i:secret)
            m[i]++;
        int x=0,y=0;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            {
                x++;
                m[guess[i]]--;
            }
            
        }
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]!=guess[i])
            {
                if(m[guess[i]]>=1)
                {
                    y++;
                    m[guess[i]]--;
                }
            }
            
        }
        return to_string(x)+"A"+to_string(y)+"B";
    }
};