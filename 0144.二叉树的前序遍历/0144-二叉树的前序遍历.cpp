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
        // ��������
        vector<int> vec;
        // ����ջ
        stack<TreeNode*> st;
        if ( root == NULL ) return {};
        st.push( root );
        while( !st.empty() ){
            TreeNode* node = st.top();
            st.pop();
            if( node != NULL ) vec.push_back(node->val);
            else continue;//���Ϊ��ֱ���������²���
            st.push( node->right );
            st.push( node->left );
        }
        return vec;
    }
};