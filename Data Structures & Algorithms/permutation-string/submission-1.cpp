class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;
        int freq1[26] = {0};
        int freq2[26] = {0};
        for (char c : s1)
            freq1[c - 'a']++;
        int l = 0;
        for (int r = 0; r < s2.length(); r++) {
            freq2[s2[r] - 'a']++;
            if (r - l + 1 > s1.length()) {
                freq2[s2[l] - 'a']--;
                l++;
            }
            if (r - l + 1 == s1.length()) {
                bool same = true;
                for (int i = 0; i < 26; i++) {
                    if (freq1[i] != freq2[i]) {
                        same = false;
                        break;
                    }
                }
                if (same)
                    return true;
            }
        }
        return false;
    }
};