class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> check;
    map<pair<string,string>,vector<int>> m;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        check[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        if(m.find({check[id].first,stationName})!=m.end()){
        m[{check[id].first,stationName}][0]+=(t-check[id].second);
        m[{check[id].first,stationName}][1]++;}
        else{
            m[{check[id].first,stationName}].push_back((t-check[id].second));                           m[{check[id].first,stationName}].push_back(1);
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        return m[{startStation,endStation}][0]*1.0/m[{startStation,endStation}][1];
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */