class FoodRatings {
public:
    unordered_map<string,map<int,set<string>>> m;
    unordered_map<string,pair<string,int>> fcr;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++)
        {
            m[cuisines[i]][ratings[i]].insert(foods[i]);
            fcr[foods[i]]={cuisines[i],ratings[i]};
            
        }
    }
    
    void changeRating(string food, int newRating) {
        pair<string,int> old=fcr[food];
        fcr[food]={old.first,newRating};
        m[old.first][old.second].erase(food);
        if(m[old.first][old.second].size()==0)
            m[old.first].erase(old.second);
        m[old.first][newRating].insert(food);
    }
    
    string highestRated(string cuisine) {
        return *m[cuisine].rbegin()->second.begin();
    
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */