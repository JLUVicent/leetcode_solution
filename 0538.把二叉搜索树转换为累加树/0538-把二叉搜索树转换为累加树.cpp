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

    int pre = 0;    //定义当前节点的值
    // 确定递归函数返回值和参数 返回值为空
    void traversal( TreeNode* cur){
        // 确定终止条件
        if( cur == NULL ) return;
        
        // 右
        traversal( cur->right );
        cur->val += pre ;   //中
        pre = cur->val  ;
        // 左
        traversal( cur->left );

    }

    TreeNode* convertBST(TreeNode* root) {
        traversal(root);
        return root;
    }
};