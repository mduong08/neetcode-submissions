class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1, trap = 0, lmax = 0, rmax = 0;
        while(l < r)
        {
            if(height[l] < height[r])
            {
                lmax = max(lmax, height[l]);
                trap += lmax-height[l];
                l++;
            } else {
                rmax = max(rmax, height[r]);
                trap += rmax-height[r];
                r--;
            }
        }
        return trap;
    }
};
