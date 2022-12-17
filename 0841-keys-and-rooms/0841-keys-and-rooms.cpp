class Solution {
public: 
    unordered_set<int> s;
    vector<bool> v;
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        s.insert(0);
        vector<bool> t(rooms.size());
        v=t;
        check(rooms,0);
        return s.size()==rooms.size();
    }
    void check(vector<vector<int>>& rooms,int c)
    {
        if(s.find(c)!=s.end()&&v[c]==false)
              {v[c]=true;
            for(auto j:rooms[c])
                    s.insert(j);
                 for(auto j:rooms[c])
               check(rooms,j);}
        
    }
};