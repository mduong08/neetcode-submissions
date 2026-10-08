class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;
        int maxArea = 0;
        while(l<r)
        {
            int dist = r - l;
            int minHeight = min(heights[r], heights[l]);
            int area = minHeight * dist;
            maxArea = max(area, maxArea);
            if(heights[l] < heights[r])
            {
                l++;
            } else r--;
        }
        return maxArea;
    }
};
