class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int i = 0;
        int j = 0;
        int n = s.length();
        unordered_set<char> st;
        while (j < n) {
            while (st.find(s[j]) != st.end()) {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            count = max(count, j - i + 1);
            j++;
        }
        return count;
    }
};
