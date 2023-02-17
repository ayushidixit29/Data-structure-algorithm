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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        if(root)
         preorder(root,v,"");
        return v;
    }
    void preorder(TreeNode* r,vector<string>&v,string s)
    {
        if (!r)
            return ;
        if(!s.empty())
            s+=("->"+to_string(r->val));
        else s+=to_string(r->val);
        if(r->left||r->right)
        {
            preorder(r->left,v,s);
            preorder(r->right,v,s);
        }
        else
            v.push_back(s);
        
    }
};
