class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 1; i < n - 1; i++) {
            // Skip duplicates with current
            if (nums[i] == nums[i - 1]) continue;

            // Move left to first different
            int left = i - 1;
            while (left >= 0 && nums[left] == nums[i]) left--;

            // Move right to first different
            int right = i + 1;
            while (right < n && nums[right] == nums[i]) right++;

            // Valid bounds check
            if (left >= 0 && right < n) {
                if (nums[i] > nums[left] && nums[i] > nums[right]) {
                    count++; // hill
                } else if (nums[i] < nums[left] && nums[i] < nums[right]) {
                    count++; // valley
                }
            }
        }

        return count;
    }
};