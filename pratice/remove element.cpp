class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i;

    for(i=0;i<nums.size();i++){
        auto it = nums.begin();
        if(nums[i]==val){
nums.erase(it+i);
            i--;
        }
    }
return nums.size(); }
        
    
};
