class Solution {
public:

vector<int> searchRange(vector<int>& nums, int target) {
    
    int low = 0;
    int high = nums.size()-1;
    int i,j;
    
    
    while(low<=high){
        int mid = low+(high-low) / 2;
        if(nums[mid] == target){
            i = mid, j = mid;
            while(i-1 >= 0 && nums[i-1] == target){
                i--;
            }
            while(j+1<nums.size() && nums[j+1] == target){
                j++;
            }
     
           return {i,j};
            }
        if(nums[mid]>target){
            high--;
        }
        else{
            low++;
        }
    }
    return {-1,-1};
}
};
