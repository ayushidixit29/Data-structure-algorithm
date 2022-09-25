class Solution {
public:
    int totalSplits(vector<int> &nums, int sum) {
        int splits = 0, cursum = 0;
        for (int x: nums) {
            if (cursum + x > sum) {
                splits++;
                cursum = x;
            } else {
                cursum += x;
            }
        }
        return splits;
    }

    int splitArray(vector<int>& nums, int m) {
        int left = *max_element(begin(nums), end(nums));
        int right = accumulate(begin(nums), end(nums), 0);

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (totalSplits(nums, mid) < m) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
