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
    // 返回值为长度为2的dp数组，dp[0]表示不偷当前节点，dp[1]表示偷当前节点
    vector<int> robtree(TreeNode* cur){
        if(cur == NULL) return {0,0};
        vector<int> left = robtree( cur->left );
        vector<int> right = robtree( cur->right );

        // 中序逻辑
        int val1 = cur->val + left[0] + right[0];//偷当前节点不偷其子节点
        int val2 = max(left[0],left[1]) + max( right[0],right[1]);  //偷子节点不偷当前节点
        return { val2,val1};

    }

    int rob(TreeNode* root) {
        vector<int> result = robtree(root);
        return max( result[1],result[0]);

    }
};