class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(auto it = nums.begin(); it != nums.end(); ++it)
        {
            for(auto it2 = it + 1; it2 != nums.end(); ++it2)
            {
                if(*it + *it2 == target) {
                    int idx1 = it - nums.begin();
                    int idx2 = it2 - nums.begin();
                    return {idx1, idx2};
                }
            }
        }
        return {};
    }
};
