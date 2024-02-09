class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
        int n = nums.size();
        std::vector<int> dp(n, 1);
        int max_size = 1, max_index = 0;
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0) {
                    dp[i] = std::max(dp[i], dp[j] + 1);
                    if (dp[i] > max_size) {
                        max_size = dp[i];
                        max_index = i;
                    }
                }
            }
        }
        std::vector<int> result;
        int num = nums[max_index];
        for (int i = max_index; i >= 0; --i) {
            if (num % nums[i] == 0 && dp[i] == max_size) {
                result.push_back(nums[i]);
                num = nums[i];
                max_size--;
            }
        }
        return result;
    }
};
