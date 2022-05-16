class Solution {
public:
    /*insertion sort */
    vector<int> sortArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int j=i;
            while(j>0 && nums[j-1]>nums[j]){
                swap(nums[j],nums[j-1]);
                j--;
            }
        }
        return nums;
    }  
    
};
