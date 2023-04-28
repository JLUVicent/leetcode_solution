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
    //µÝ¹é
    void Traversal(TreeNode* node, vector<int>& vec){
        if( node==NULL) return;
        vec.push_back(node->val);   //ÖÐ
        Traversal(node->left,vec);  //×ó
        Traversal(node->right,vec); //ÓÒ
    }
    vector<int> preorderTraversal(TreeNode* root) {

        // //µü´ú·¨
        // vector<int> result;
        // if( root == NULL) return result;
        // stack<TreeNode*> st;
        // st.push(root);
        // while(!st.empty()){
        //     TreeNode* node = st.top();
        //     st.pop();
        //     result.push_back(node->val);
        //     if( node->right) st.push(node->right);
        //     if( node->left) st.push(node->left);    //×ó
        // }
        // return result;
        vector<int> result;
        Traversal(root,result);
        return result;
    }
};