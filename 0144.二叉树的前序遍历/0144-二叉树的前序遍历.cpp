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
    //递归函数的参数和返回值
    void traversal(TreeNode* node, vector<int>& vec){
        //确定终止条件
        if( node == NULL) return;

        //确定单层递归逻辑
        vec.push_back(node->val);//中
        traversal(node->left,vec);   //左
        traversal(node->right,vec); //右
    }

    vector<int> preorderTraversal(TreeNode* root) {
        // 使用栈来进行遍历
        // stack<TreeNode*> st;
        // //存储结果
        // vector<int> result;
        // if( root == NULL ) return result;
        // st.push(root);
        // // result.push_back(root->val);
        // while( !st.empty() ){
        //     TreeNode* node = st.top();
        //     st.pop();
        //     result.push_back(node->val);
        //     if( node->right ) st.push(node->right);//入栈先入右孩子再入左孩子
        //     if( node->left ) st.push(node->left);
        // }
        // return result;
        
        //递归遍历
        vector<int> result;
        traversal(root,result);
        return result;
    }
};