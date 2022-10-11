class Solution {
    bool isPossible(vector<vector<int>>& temp, int side, int threshold){
        for(int i=0; i <= temp.size()-side; i++){
            for(int j=0; j <= temp[0].size()-side; j++){
                int s = 0;
                for(int k=i; k < i + side; k++){
                    if(j != 0)
                        s += temp[k][j+side-1] - temp[k][j-1];
                    else
                        s += temp[k][j+side-1];
                }
                if(s <= threshold)
                    return true;
            }
        }
        return false;
    }
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int st = 0;
        int m = mat.size();
        int n = mat[0].size();
        int end = m < n ? m : n;
        int ans = 0;
        vector<vector<int>> temp(m, vector<int>(n,0));
        for(int i=0; i<mat.size(); i++){
            temp[i][0] = mat[i][0];
        }
        for(int i=0; i<mat.size(); i++){
            for(int j=1; j<mat[0].size(); j++){
                temp[i][j] = temp[i][j-1] + mat[i][j];
            }
        }
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isPossible(temp, mid, threshold)){
                ans = mid;
                st = mid + 1;
            }
            else end = mid - 1; 
        }
        return ans;
    }
};
