class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> a;
        string b="";
        a.push_back(-1);
        for(auto i:s)
        {
           if(i==' ')
           {
               if(b!="")
              {
               int j=stoi(b);
               if(a.back()>=j)
                   return false;
               a.push_back(j);
               b="";}
               
           }
            else if(i>='0'&&i<='9') b+=i;
        }
        if(b!=""){
        int j=stoi(b);
        if(a.back()>=j)
                   return false;
}        return true;
    }
};