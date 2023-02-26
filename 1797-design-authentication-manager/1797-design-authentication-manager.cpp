class AuthenticationManager {
public:
    int t;
    unordered_map<string,int> m;
    AuthenticationManager(int timeToLive) {
        t=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        if(!m.count(tokenId))
        m[tokenId]=currentTime+t;
    }
    
    void renew(string tokenId, int currentTime) {
        if(m.count(tokenId))
           if(m[tokenId]>currentTime)
        {
                m[tokenId]=currentTime+t;
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int e=0;
        for(auto i:m)
            if(i.second>currentTime)
                e++;
        return e;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */