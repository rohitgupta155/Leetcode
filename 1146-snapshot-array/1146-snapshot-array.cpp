class SnapshotArray {
public:
    vector<vector<pair<int,int>>> snapshot;
    int id;
    SnapshotArray(int length) {
        id=0;
        snapshot.resize(length);
        for(int i=0;i<length;i++)
        {
            snapshot[i].push_back({0,0});
        }
    }
    
    void set(int index, int val) {
        snapshot[index].push_back({id,val});
    }
    
    int snap(){
        id++;
        return id-1;
    }
    
    int get(int index, int snap_id) {
        auto i=upper_bound(snapshot[index].begin(),snapshot[index].end(),make_pair(snap_id,INT_MAX));
        return prev(i)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */