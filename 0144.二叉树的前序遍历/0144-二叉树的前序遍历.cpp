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
    vector<int> preorderTraversal(TreeNode* root) {
        // 定义数组
        vector<int> vec;
        // 定义栈
        stack<TreeNode*> st;
        if ( root == NULL ) return {};
        st.push( root );
        while( !st.empty() ){
            TreeNode* node = st.top();
            st.pop();
            if( node != NULL ) vec.push_back(node->val);
            else continue;//如果为空直接跳过以下步骤
            st.push( node->right );
            st.push( node->left );
        }
        return vec;
    }
};