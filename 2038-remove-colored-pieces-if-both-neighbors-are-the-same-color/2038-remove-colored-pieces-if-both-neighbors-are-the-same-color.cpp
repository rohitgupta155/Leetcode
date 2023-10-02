class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<3)
            return false;
        int a=0,b=0;
        for(int i=2;i<colors.size();i++)
        {
            if(colors[i]==colors[i-1]&&colors[i]==colors[i-2])
            {
                if(colors[i]=='A')
                {
                    a++;
                    i++;
                    while(colors[i]=='A')
                        {i++;
                        a++;}
                    i++;
                }
                else{
                     {
                    b++;
                    i++;
                    while(colors[i]=='B')
                        {i++;
                        b++;}
                    i++;
                }
                }
            }
        }
        if(a==b)
            return false;
        if(a>b)
            return true;
        return false;
    }
};