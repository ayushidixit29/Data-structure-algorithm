class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0,right=n-1;
        while(left<=right){
            int m=left+(right-left)/2;
            if(nums[m]==target) return m;
            if(nums[m]<target) left= m+1;
            else right=m-1;
        }
        return left;
    }
};
