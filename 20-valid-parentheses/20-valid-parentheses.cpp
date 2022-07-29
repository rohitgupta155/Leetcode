class Solution {
public:
    vector<char> p;
    int i=-1;
    bool isValid(string s) {
        if(s.size()<2)
            return false;
        for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
            push(s[i]);
            else{
                if(check(s[i]))
                    pop();
            else
                return false;
            }
    }
        if(p.size()>0)
            return false;
   return true;
    }
    void push(char a)
{
    if(p.size()>=0){
    p.push_back(a);
        i++;}
    printf("%c",p[i]);
    
}
void pop()
{
    if(p.size()>0){
    i--;
    p.pop_back();
    }
}
bool check(char a)
{
    if(p.size()>0){
    if((p[i]=='('&&a==')')||(p[i]=='['&&a==']')||(p[i]=='{'&&a=='}'))
        return true;
    }
    return false;
}
};

