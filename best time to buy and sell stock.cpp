class Solution {
public:
        int maxProfit(vector<int>& arr) 
    {
        int maximum=0;
        int current_profit=0;
        int buy=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<buy)
                buy=arr[i];
            current_profit=arr[i]-buy;
            maximum=max(maximum,current_profit);
        }
        return maximum;
    
        
    }
};
