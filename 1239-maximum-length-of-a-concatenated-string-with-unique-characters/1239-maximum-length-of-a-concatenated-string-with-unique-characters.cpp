class Solution {
public:
    int ans=0;
    int maxLength(vector<string>& arr) {
        vector<string> arr1;
        unordered_set<char> s;
        for(auto i:arr)
            arr1.push_back(unordered_set<char>(i.begin(),i.end()).size()==i.size()?i:"");
        find(arr1,0,s);
        return ans;
    }
    void remove(unordered_set<char>& s,int i,string a){
        while(i>=0)
        {
            s.erase(a[i]);
            i--;
        }
    }
    void find(vector<string>& arr,int i,unordered_set<char> s)
    {
        if(i==arr.size())
        {
            ans=max(ans,(int)s.size());
            return;
        }
        find(arr,i+1,s);
        unordered_set<char> t;
        for(int k=0;k<arr[i].size();k++)
            {
                if(s.find(arr[i][k])!=s.end()){
                    // remove(s,k-1,arr[i]);
                    t.clear();
                    break;
                }
                else{
                    t.insert(arr[i][k]);
                }
            }
        if(t.size()==0)
            return;
        s.insert(t.begin(),t.end());
        find(arr,i+1,s);        
    }
};