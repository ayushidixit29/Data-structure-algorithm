class Solution {
public:
    /*selection sort */
    vector<int> sortArray(vector<int>&nums){
        for(int i= 0;i<nums.size()-1;i++){
            int minIndex =i;
            for(int j=i+1;j<nums.size();j++){
                if (nums[minIndex]>nums[j])
                    minIndex =j;
            }
            swap(nums[i],nums[minIndex]);
        }
        return nums;
    }
    
};
