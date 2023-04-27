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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while( cur != NULL || !st.empty()){
            if( cur){
                st.push(cur);   //将访问的节点加入栈
                cur = cur->left;    //左
            }else{
                cur = st.top();
                st.pop();
                result.push_back(cur->val); //中
                cur = cur->right;           //右
            }
        }
        return result;
    }
};