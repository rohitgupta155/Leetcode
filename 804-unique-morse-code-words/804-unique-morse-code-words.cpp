class Solution {
    private:
    string m[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        int n=w.size();
        for(int i=0;i<n;i++)
        {
            w[i]=convert(w[i]);
        }
        map<string,int> m;
        for(int i=0;i<n;)
        {
            m[w[i++]]++;
        }
        
        return m.size();
    }
    string convert(string s)
    {
        int n=s.size();
        string a;
        for(int i=0;i<n;i++)
        {  
          a.append(m[s[i]-97]);
        }
        return a;
    }
};