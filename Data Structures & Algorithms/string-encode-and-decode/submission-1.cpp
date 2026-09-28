class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string &s : strs) {
            encoded += to_string(s.size());
            encoded += '#';
            encoded += s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // Find '#'
            while (s[j] != '#')
                j++;

            // Length of current string
            int len = stoi(s.substr(i, j - i));

            // Extract the string
            decoded.push_back(s.substr(j + 1, len));

            // Move to the next encoded string
            i = j + 1 + len;
        }

        return decoded;
    }
};