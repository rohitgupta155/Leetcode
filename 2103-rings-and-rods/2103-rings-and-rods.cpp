class Solution {
public:
    int countPoints(string rings) {
        if(rings.size()<6)
            return 0;
        vector<unordered_map<char,int>>v(10);
        for(int i=0;i<rings.size();i+=2)
            v[rings[i+1]-'0'][rings[i]]++;
        int c=0;
        for(int i=0;i<10;i++)
        {if(v[i].size()==3)
                c++;
            cout<<i<<"-->>R "<<v[i]['R']<<"-->>G "<<v[i]['G']<<"-->>B "<<v[i]['B']<<endl;
            
        }
        return c;
    }
};