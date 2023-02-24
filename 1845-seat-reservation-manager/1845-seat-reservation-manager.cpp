class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>> s;
    SeatManager(int n) {
        while(n--)
            s.push(n+1);
    }
    
    int reserve() {
        int a=s.top();
        s.pop();
        return a;
    }
    
    void unreserve(int seatNumber) {
        s.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */