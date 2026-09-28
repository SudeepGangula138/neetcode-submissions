class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) {
            return "";
        }
        vector<int> need(128, 0);
        vector<int> window(128, 0);
        for (char c : t) {
            need[c]++;
        }
        int l = 0;
        int r = 0;
        int required = t.length();
        int formed = 0;
        int minlen = INT_MAX;
        int start = 0;
        while (r < s.length()) {
            char c = s[r];
            window[c]++;
            if (window[c] <= need[c]) {
                formed++;
            }
            while (formed == required) {
                if (r - l + 1 < minlen) {
                    minlen = r - l + 1;
                    start = l;
                }
                char leftChar = s[l];
                window[leftChar]--;
                if (window[leftChar] < need[leftChar]) {
                    formed--;
                }
                l++;
            }
            r++;
        }
        if (minlen == INT_MAX) {
            return "";
        }
        return s.substr(start, minlen);
    }
};