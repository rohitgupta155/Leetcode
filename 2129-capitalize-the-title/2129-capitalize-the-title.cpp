class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> v;
        string t;
        for(char i:title)
        {
           if(i==' ')
              { cout<<t<<" ";
               v.push_back(t);
              t="";}
            else{
                if(i<'a')
                    t+=(i+32);
                else t+=i;
            }
            
        }
        cout<<t<<endl;
        v.push_back(t);
        title.clear();
        for(string i:v)
        {
            if(i.size()<3)
                title=title+i+" ";
            else{
                i[0]-=32;
                title=title+i+" ";
            }
        }
        cout<<title;
        title.pop_back();
        return title;
    }
};