class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int l = i+1, r = nums.size()-1;
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            while(l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;
                    l++;r--;
                } else if(sum > 0) r--;
                else if(sum < 0) l++;
            }
        }
        return res;
    }
};
