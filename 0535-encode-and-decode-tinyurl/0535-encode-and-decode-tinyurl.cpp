class Solution {
public:
    
    // Encodes a URL to a shortened URL.
    unordered_map<int,string> m;
    int i=1;
    string c="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string encode(string longUrl) {
        m[i]=longUrl;
        longUrl.clear();
        int n=i;
        i++;
        while(n)
        {
            longUrl=c[n%62]+longUrl;
            n/=62;
        }
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int n=0;
        for(auto i:shortUrl)
        {
            if(i>='a'&&i<'z')
                n=n*62+i-'a';
            else if(i>='A'&&i<='Z')
                n=n*62+i-'A';
            else
                n=n*62+i-'0';
        }
        return m[n];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));