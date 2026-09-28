class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Pointer for s
        int j = 0; // Pointer for t

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++; // Match found, move to next character in s
            }
            j++; // Always move through t
        }

        return i == s.length();
    }
};