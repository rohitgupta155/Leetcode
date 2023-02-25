class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        vector<vector<int>> m(2,vector<int>(2));
        event1[0].erase(event1[0].begin()+2); 
        event1[1].erase(event1[1].begin()+2);
        event2[0].erase(event2[0].begin()+2); 
        event2[1].erase(event2[1].begin()+2);
        m[0][0]=stoi(event1[0]); 
        m[0][1]=stoi(event1[1]);
        m[1][0]=stoi(event2[0]); 
        m[1][1]=stoi(event2[1]);
        sort(m.begin(),m.end());
        return m[0][1]>=m[1][0]||m[0][1]>=m[1][1];
    }
};