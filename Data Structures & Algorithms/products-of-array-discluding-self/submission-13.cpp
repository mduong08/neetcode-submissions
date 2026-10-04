class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size(), 1);
        int l = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            arr[i] = l;
            l *= nums[i];
        }

        int r = 1;
        for(int i = nums.size()-1; i >= 0; i--)
        {
            arr[i] *= r;
            r*=nums[i];
        }
        return arr;
    }
};
