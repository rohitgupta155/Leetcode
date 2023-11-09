class Solution {
public:
    char next(char a)
    {
        return a=='a'?'e':a=='e'?'i':a=='i'?'o':a=='o'?'u':'a';
    }
    int count(char a,int &i,string &word)
    {
        int c=0;
        while(word[i]==a)
        {
            c++;
            i++;
        }
        return c;
    }
    int longestBeautifulSubstring(string word) {
        int ans=0;
       for(int i=0;i<word.size();i++)
       {
           int sum=0,start=i;
           if(word[i]=='a'){
               sum+=count('a',i,word);                                                                        if(word[i]=='e')sum+=count('e',i,word); else {i--;continue;} 
               if(word[i]=='i')sum+=count('i',i,word); else {i--;continue;}
               if(word[i]=='o')sum+=count('o',i,word); else {i--;continue;}
               if(word[i]=='u')sum+=count('u',i,word); else {i--;continue;}
               // cout<<start<<" "<<i-1<<endl;
               ans=max(ans,sum);
               i--;   
           }
           
       }
        return ans;
    }
};