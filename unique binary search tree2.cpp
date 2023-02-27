/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    vector<TreeNode*> generate(int n,int start){
        if(start>n)return {NULL};
        vector<TreeNode*>res;
        for(int i=start;i<=n;i++){
            for(auto left:generate(i-1,start)){
                for(auto right:generate(n,i+1)){
                    res.push_back(new TreeNode(i,left,right));
                }
            }
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        return generate(n,1);
    }
};
