class Solution {
public:
    int arrangeCoins(int n) {
        
        long low=1;
        long  high=n;
        
        while(low<=high){
            
            long mid=(low+high)/2;
            
            long sum =(mid*(mid+1))/2;
            
            if (sum < n ){
                
                low =mid+1;
            }
            else if(sum > n){
                
                high = mid -1;
            }
            
            else{
                
                return mid;
            }
            
        }
         
        
        return low-1;
        
    }
};
