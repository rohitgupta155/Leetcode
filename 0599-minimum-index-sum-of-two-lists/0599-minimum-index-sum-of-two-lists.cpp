class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> m,n;
        int j=0;
        for(string i:list1)
            m[i]=j++;
        j=0;
        for(string i:list2)
            n[i]=j++;
        list2.clear();
        int c=INT_MAX;
        for(string i:list1)
        {
            if(n.count(i))
            {
                int sum=m[i]+n[i];
                if(sum<c){
                    list2.clear();
                    list2.push_back(i);
                    c=sum;}
                else if(sum==c)
                    list2.push_back(i);
            }
        }
        return list2;
    }
};