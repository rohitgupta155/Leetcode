class ParkingSystem {
public:
    unordered_map<int,int> curr;
    vector<int> a;
    ParkingSystem(int big, int medium, int small) {
        a.push_back(big);
        a.push_back(medium);
        a.push_back(small);
    }
    
    bool addCar(int carType) {
        if(curr[carType]<a[carType-1])
            {curr[carType]++;
             return true;}
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */