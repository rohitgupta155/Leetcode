class Solution {
public:
    vector<string> stringSequence(string target) {
        string temp = "a";
        vector<string>ans;
        for(int i =0; i<target.length();i++){
            while(temp[temp.length()-1]!=target[i]){
                ans.push_back(temp);
                temp[temp.length()-1] = temp[temp.length()-1]=='z'?'a':temp[temp.length()-1]+1;
               
            }
            ans.push_back(temp);
            temp+='a';
        }
        return ans;
        
    }
};