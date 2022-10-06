class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> t;
        for(auto i:ops)
        {
            if(i=="+")
                t.push_back(t.back()+t[t.size()-2]);
            else if(i=="C")
                t.pop_back();
            else if(i=="D")
                t.push_back(t.back()*2);
            else t.push_back(stoi(i));
        }
        return accumulate(t.begin(),t.end(),0);
    }
};