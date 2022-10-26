class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        vector<int> v1,result;
        for(int i = 0; i < nums.size(); i++)
            v1.push_back(0);
        for(int i = 0;i < nums.size();i++)
            v1[nums[i] - 1]++;
        for(int i = 0; i < v1.size(); i++)
        {
            if(v1[i] == 0)
                result.push_back(i+1);
        }
        return result;
    }
};
