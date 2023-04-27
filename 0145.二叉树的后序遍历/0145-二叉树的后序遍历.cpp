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

    // void traversal(TreeNode* node,vector<int>& vec){
    //     if( node == NULL) return;
    //     traversal(node->left,vec);
    //     traversal(node->right,vec);
    //     vec.push_back(node->val);
    // }

    vector<int> postorderTraversal(TreeNode* root) {
        // vector<int> result;
        // traversal(root,result);
        // return result;

        //使用栈
        //使用中右左，最后再反转数组即可
        //判断空数组
        vector<int> result;
        if( root == NULL) return result;
        
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            result.push_back(node->val);    //中
            if( node->left ) st.push(node->left);   //左
            if( node->right ) st.push(node->right); //右
        }
        reverse(result.begin(),result.end());
        return result;


    }
};