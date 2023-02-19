class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> merged;

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i][0] < nums2[j][0]) {
                merged.push_back(nums1[i]);
                i++;
            } else if (nums1[i][0] > nums2[j][0]) {
                merged.push_back(nums2[j]);
                j++;
            } else {
                vector<int> temp = {nums1[i][0], nums1[i][1] + nums2[j][1]};
                merged.push_back(temp);
                i++;
                j++;
            }
        }

        while (i < nums1.size()) {
            merged.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            merged.push_back(nums2[j]);
            j++;
        }

        return merged;
    }
};