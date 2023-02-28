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
        // ����ջ�洢�������ڵ�
        stack<TreeNode*> st;
        vector<int> vec;
        if ( root == NULL ) return vec;
        st.push( root );
        while( !st.empty()){
            TreeNode* node = st.top();
            st.pop();
            // vec.push_back( node );
            if ( node != NULL ) vec.push_back( node->val ); //��
            else continue;
            st.push( node -> right );//��
            st.push( node -> left ); //��
        }
        return vec;

    }
};