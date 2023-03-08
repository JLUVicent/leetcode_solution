/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    // 1.直接计算
    // // 1.确定递归函数参数和返回值
    // TreeNode* traversal(TreeNode* node,TreeNode* p,TreeNode* q){
    //     // 2.确定终止条件
    //     if( node == NULL ) return node;
    //     if( node == p || node == q) return node;
    //     // 3.确定单层递归逻辑
    //     // 自底向上，采用后续遍历，左右中
    //     TreeNode* left = traversal( node->left, p, q);
    //     TreeNode* right = traversal( node->right, p, q);
    //     // 中
    //     if( left != NULL && right != NULL ) return node;    //左右不为空向上返回node
    //     else if( left != NULL && right == NULL) return left;
    //     else if( left == NULL && right != NULL) return right;
    //     else{ return NULL; }
    // }

    // 2.结合搜索二叉树的性质
    TreeNode* traversal(TreeNode* cur,TreeNode* p,TreeNode* q){
        // // 终止条件
        // if ( cur == NULL ) return NULL;
        // //  单层逻辑
        // if ( cur->val > p->val && cur->val > q->val ){
        //     TreeNode* left = traversal( cur->left, p, q);
        //     if( left != NULL ) return left;
        // }
        // else if( cur->val < p->val && cur->val < q->val){
        //     TreeNode* right = traversal( cur->right, p, q);
        //     if( right != NULL ) return right;
        // }
        // return cur;

        // 递归
        while(cur){
            if ( cur->val > p->val && cur->val > q->val ){
                cur = cur->left;
            }
            else if( cur->val < p->val && cur->val < q->val){
                cur = cur->right;
            }
            else { return cur;}
        }
        return NULL;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traversal( root, p, q);
        
    }
};