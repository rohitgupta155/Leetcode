class Solution {
public:
    int compress(vector<char>& chars) {
        int a=0,c=1,j=0;
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]==chars[i-1])
                c++;
            else{
                if(c>1)
                    {chars[j++]=chars[i-1];string d=to_string(c);for(char l:d)chars[j++]=l;
                    a+=d.size()+1;}
                else {chars[j++]=chars[i-1]; a++;}
                c=1;
            }
        }
         if(c>1){chars[j++]=chars.back();string d=to_string(c);for(char i:d)chars[j++]=i;
                    a+=d.size()+1;}
                else {chars[j++]=chars.back(); a++;}
        
        return a;
    }
};