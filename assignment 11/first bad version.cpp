class Solution {
public:
    int firstBadVersion(int n) {
        int ans = INT_MAX;
        int start = 1, end = n;
        int mid = start+(end-start)/2;
        while(start <= end){
            if(isBadVersion(mid)){
                ans = min(ans, mid);
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
    }
};
