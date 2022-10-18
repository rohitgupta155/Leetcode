class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> a;
        string b;
        for(char i: sentence)
        {
            if(i==' '){
                a.push_back(b); b="";}
            else b+=i;
        }
        a.push_back(b);
        b="a";
       sentence.clear();

        for(auto i:a)
        {
            if(isvowel(i[0]))
            {
                sentence+=i+"ma"+b+' ';
            }
            else{
                char c=i[0];
                i.erase(i.begin());
                sentence+=i+c+"ma"+b+' ';
            }
            b+='a';
        }
        sentence.pop_back();
        return sentence;
    }
    bool isvowel(char i)
    {
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
            return true;
        return false;
    }
};