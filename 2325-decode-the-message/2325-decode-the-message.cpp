class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        char p=97;
        for(auto i:key)
        {
            if(i!=' '&&!m.count(i)){
                m[i]=p;
                p++;}
        }
        for(int i=0;i<message.size();i++)
            if(message[i]!=' ')
                message[i]=m[message[i]];
        return message;
    }
};