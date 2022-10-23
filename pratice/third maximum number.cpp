class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        vector<int>vec(s.begin(),s.end());
        if(vec.size()<3)
        {
            return vec[vec.size()-1];
        }
        else
        {
            return vec[vec.size()-3];
        }
    }
};
