class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        vector<int>o;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            if(mp.find(c)!=mp.end()){
                o.push_back(mp[c]);
                o.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return o;
    }
};
