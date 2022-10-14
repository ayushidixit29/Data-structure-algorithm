class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();++i){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int n=it.second-1;
            ans+=((n)*(n+1))/2;
        }
        return ans;
    }
};
