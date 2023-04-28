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
    //�ݹ�
    void Traversal(TreeNode* node, vector<int>& vec){
        if( node==NULL) return;
        vec.push_back(node->val);   //��
        Traversal(node->left,vec);  //��
        Traversal(node->right,vec); //��
    }
    vector<int> preorderTraversal(TreeNode* root) {

        // //������
        // vector<int> result;
        // if( root == NULL) return result;
        // stack<TreeNode*> st;
        // st.push(root);
        // while(!st.empty()){
        //     TreeNode* node = st.top();
        //     st.pop();
        //     result.push_back(node->val);
        //     if( node->right) st.push(node->right);
        //     if( node->left) st.push(node->left);    //��
        // }
        // return result;
        vector<int> result;
        Traversal(root,result);
        return result;
    }
};