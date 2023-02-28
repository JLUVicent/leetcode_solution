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
        // 定义栈存储二叉树节点
        stack<TreeNode*> st;
        vector<int> vec;
        if ( root == NULL ) return vec;
        st.push( root );
        while( !st.empty()){
            TreeNode* node = st.top();
            st.pop();
            // vec.push_back( node );
            if ( node != NULL ) vec.push_back( node->val ); //中
            else continue;
            st.push( node -> right );//右
            st.push( node -> left ); //左
        }
        return vec;

    }
};