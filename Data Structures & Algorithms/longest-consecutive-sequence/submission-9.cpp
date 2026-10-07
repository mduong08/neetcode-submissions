class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> stored(nums.begin(), nums.end());
        for(int x: stored)
        {
            if (stored.find(x - 1) == stored.end()) {
                int current = x;
                int steak = 0;
                while(stored.find(current) != stored.end())
                {
                    current++;
                    steak++;
                }
                result = max(result, steak);
            }
        }
        return result;
    }
};
