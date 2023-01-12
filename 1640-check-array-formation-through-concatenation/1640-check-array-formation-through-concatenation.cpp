class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        vector<int> v(arr.size(),0);
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        m[arr[i]]=i;
        for(auto i:pieces)
           { if(i.size()==1)
               {if(v[m[i[0]]]==0)
               v[m[i[0]]]=i[0];
               else return false;}
            else{
                int k=m[i[0]];
                for(auto j:i)
                {
                    if(k>=arr.size()||v[k]!=0)
                        return false;
                    v[k++]=j;
                }
            }
        }
        return v==arr; 
    }
};