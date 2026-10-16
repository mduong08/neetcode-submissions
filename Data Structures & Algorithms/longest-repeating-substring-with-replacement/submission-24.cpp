class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> charSet;
        int maxcount = 0;
        int maxlen = 0;
        int l = 0, r = 0;
        for (int r = 0; r < s.length(); r++) {
            charSet[s[r]]++;
            maxcount = max(maxcount, charSet[s[r]]);
            if ((r - l + 1) - maxcount > k) {
                charSet[s[l]]--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
        }
        return maxlen;
    }
};
