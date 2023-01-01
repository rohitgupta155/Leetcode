class Twitter {
public:
    vector<pair<int,int>> t;
    unordered_map<int,unordered_set<int>> f;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        t.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        int c=0;
        for(int i=t.size()-1;i>=0;i--)
        {
            if(t[i].first==userId||f[userId].find(t[i].first)!=f[userId].end())
               { ans.push_back(t[i].second);
                c++;}
            if(c==10)
                return ans;
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        f[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        f[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */