class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string, vector<string>> res; 
        for(const auto &x : str)
        {
            string sorted = x;
            sort(sorted.begin(), sorted.end());
            res[sorted].push_back(x);
        }
        vector<vector<string>> result;
        for(const auto &pair : res) result.push_back(pair.second);
        return result;
    }
};
