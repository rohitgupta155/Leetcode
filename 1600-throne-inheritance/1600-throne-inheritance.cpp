class ThroneInheritance {
public:
    // kingdomCum raja;
    unordered_map<string,vector<string>> rajPariwar;
    unordered_set<string> samsan;
    string raja;
    ThroneInheritance(string kingName) {
        raja=kingName;
    }
    
    void birth(string baap, string beta) {
        rajPariwar[baap].push_back(beta);
    }
    
    void death(string name) {
        samsan.insert(name);
    }
    
    vector<string> getInheritanceOrder() {
        vector<string> waaris;
        warisnikalo(raja,waaris);
        return waaris;
    }
    void warisnikalo(string raaja,vector<string> &waaris)
    {
        if(samsan.find(raaja)==samsan.end())
            waaris.push_back(raaja);
        for(auto i:rajPariwar[raaja])
        {
            warisnikalo(i,waaris);
        }
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */