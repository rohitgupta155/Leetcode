class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i=0,j=0;
        while(i<v1.size()||j<v2.size())
        {
            string c1="0",c2="0";
            while(i<v1.size()&&v1[i]!='.')
            {
                c1+=v1[i];
                i++;
            }
            while(j<v2.size()&&v2[j]!='.')
            {
                c2+=v2[j];
                j++;
            }
            i++,j++;
            int n=stoi(c1),m=stoi(c2);
            if(n>m)
                return 1;
            if(n<m)
                return -1;
        }
        return 0;
    }
};