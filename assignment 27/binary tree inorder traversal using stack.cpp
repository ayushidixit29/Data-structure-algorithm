class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root)
    {
        vector<int> res;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* cur = st.top();
            st.pop();
            if(cur){
                res.push_back(cur->val);
                st.push(cur->right);
                st.push(cur->left);
            }
        }
        return res;
    }
};
