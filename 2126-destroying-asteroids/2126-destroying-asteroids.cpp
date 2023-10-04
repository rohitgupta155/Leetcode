class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long int m=mass;
        for(auto i:asteroids)
            if(m<i)
                return false;
            else m+=i;
        return true;
    }
};