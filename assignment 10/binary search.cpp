class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start,end,mid;
        start=0;
        end=nums.size()-1;
        while( end>=start){
            mid=start+(end-start)/2;
            if(target==nums[mid]) return mid;
            else if(target<nums[mid]){
                end = mid-1;
            }
            else if(target>nums[mid]){

                start = mid +1;
            }


        }
        return -1;
    }
};
