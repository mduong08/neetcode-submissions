class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int>> save(nums.size()+1);
        vector<int> result;
        for(auto& x: nums)
        {
            map[x]++;
        }
        for(auto& pair: map)
        {
            save[pair.second].push_back(pair.first);
        }
        for(int i = save.size()-1; i >= 0; --i)
        {
            if (result.size() == k) break;
            for (int num : save[i]) {
                result.push_back(num);
            }
        }
        return result;
    }
};
