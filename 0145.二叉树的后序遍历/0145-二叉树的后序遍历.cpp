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
    vector<int> postorderTraversal(TreeNode* root) {

        stack<TreeNode*> st;
        vector<int> result;
        if ( root == NULL) return result;
        st.push( root );
        while( !st.empty()){
            TreeNode* node = st.top(); //´æ´¢Õ»¶¥ÔªËØ
            st.pop();
            if ( node != NULL ){
                result.push_back( node->val);
            }
            else continue;
            st.push( node->left);
            st.push( node->right);
        }
        reverse(result.begin(),result.end());
        return result;

    }
};