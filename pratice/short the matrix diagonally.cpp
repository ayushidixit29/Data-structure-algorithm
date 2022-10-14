class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size()));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(i==0 or j==0)
                {
                    vector<int>temp;
                    fun(i,j,temp,ans,mat);
                }
            }
        }
        return ans;
    }
    void fun(int row,int col,vector<int>&temp,vector<vector<int>>&ans,vector<vector<int>>&mat)
    {
        int i=row;
        int j=col;
        while(i>=0 and i<mat.size() and j>=0 and j<mat[0].size())
        {
            temp.push_back(mat[i][j]);
            i++;
            j++;
        }
        sort(temp.begin(),temp.end());
        i=row;
        j=col;
        int k=0;
        while(i>=0 and i<mat.size() and j>=0 and j<mat[0].size() and k<temp.size())
        {
            ans[i][j]=temp[k];
            k++;
            i++;
            j++;
        }
    }
};
