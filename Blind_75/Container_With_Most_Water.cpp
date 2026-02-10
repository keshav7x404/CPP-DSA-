class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int heig = min(height[left], height[right]);
            int width = right - left;
            int currentWater = heig * width;

            maxWater = max(maxWater, currentWater);

            // Move the smaller height pointer
            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }

        return maxWater;
    }
};
