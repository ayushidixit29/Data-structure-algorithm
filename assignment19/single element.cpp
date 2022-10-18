class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        int size = nums.size();
        int start = 0,end = size - 1;
        if(size == 1) return nums[0];
        if(nums[start] != nums[start+1]) return nums[start];
        if(nums[end] != nums[end-1]) return nums[end];
        
        
        while(start <= end )
        {
            int mid = start + (end - start) / 2;
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            
            else if ((nums[mid] == nums[mid + 1] && mid % 2 == 0) || (nums[mid] == nums[mid - 1] && mid % 2 != 0))
            {
                start = mid + 1;
            }
       
            else
            {
                end = mid - 1;
            }
        }
        return 0;
    }
};
