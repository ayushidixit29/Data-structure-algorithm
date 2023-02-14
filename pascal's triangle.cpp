class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1){
            return {{1}};
        }
        if(numRows==2){
            return {{1},{1,1}};
        }
        vector<vector<int>> ans ={{1},{1,1}};
        for(int i = 3;i<=numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j= 0;j<(ans[ans.size()-1].size() - 1);j++){
                temp.push_back((ans[ans.size()-1][j]) + (ans[ans.size()-1][j + 1]));
               
            }
             temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
