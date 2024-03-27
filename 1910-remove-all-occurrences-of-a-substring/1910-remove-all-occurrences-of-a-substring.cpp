class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        bool check=true;
        while(check){
            check=false;
            ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==part[0])
            {
                int start=i,j=0;
                while(start<s.size()&&s[start]==part[j])
                {
                    j++,start++;
                }
                if(j==part.size())
                 {  
                    string temp;
                 for(int k=0;k<s.size();k++)
                 {
                     if(k<i||k>=start)
                         temp+=s[k];
                 }
                 s=temp;
                 check=true;
                 break;
                }
            }
        }
        }
        return s;
    }
};