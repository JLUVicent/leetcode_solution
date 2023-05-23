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
    int MaxDepth = INT_MIN;
    int res;
    void traversal(TreeNode* node,int depth){
        if( node->left == NULL && node->right == NULL){
            if( depth > MaxDepth){
                MaxDepth = depth;
                res = node->val;
            }
        }
        if( node->left){
            traversal(node->left,depth+1);
        }
        if( node->right){
            traversal(node->right,depth+1);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        // //≤„–Ú±È¿˙
        // queue<TreeNode*> que;
        // int res;
        // if(root == NULL) return res;
        // que.push(root);
        // while(!que.empty()){
        //     int size = que.size();
        //     for( int i = 0; i < size; i++){
        //         TreeNode* node = que.front();
        //         que.pop();
        //         if(i == 0) res = node->val;
        //         if( node ->left)que.push(node->left);
        //         if( node ->right)que.push(node->right);
        //     }
        // }
        // return res;
        traversal(root,0);
        return res;

    }
};