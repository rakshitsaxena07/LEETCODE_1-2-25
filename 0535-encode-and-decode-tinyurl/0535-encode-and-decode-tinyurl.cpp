class Solution {
    unordered_map<string, string> shortToLong;
    unordered_map<string, string> longToShort;
    int counter = 0;
    const string base = "http://tinyurl.com/";
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
  if (longToShort.count(longUrl))
            return longToShort[longUrl];

        string code = to_string(counter++);
        string shortUrl = base + code;
        shortToLong[shortUrl] = longUrl;
        longToShort[longUrl] = shortUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return shortToLong[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));