class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        // vector<int> a(2);
        //  for(int i=0;i<n.size();i++)
        //      for(int j=i+1;j<n.size();j++)
        //      {
        //          if(n[i]+n[j]==target){
        //              a[0]=i;
        //              a[1]=j;
        //              break;
        //          }
        //      }
        // return a;
        unordered_map<int,vector<int>> m;
        int j=0;
        for(int i:n)
        {
            m[i].push_back(j++);
        }
        for(int i:n)
            if(m.count(target-i))
                {if(m[target-i].size()==2)
                    return m[target-i];
        else
                if(m[i][0]!=m[target-i][0])
                return {m[i][0],m[target-i][0]};}
        return {0,0};
    }
};