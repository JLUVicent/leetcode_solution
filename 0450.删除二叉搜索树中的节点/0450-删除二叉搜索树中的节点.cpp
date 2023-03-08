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

    // 确定递归返回值和参数
    TreeNode* deleteT(TreeNode* node,int val){
        // 确定终止条件
        if( node == NULL ) return NULL;
        if ( node->val == val){
            // 叶子节点
            if ( node->left == NULL && node->right == NULL ){       //返回空即删除该节点
                return  NULL;
            }
            else if ( node->left ==NULL && node->right != NULL){    //右节点直接指向其父节点
                return node->right;
            }
            else if( node->left != NULL && node->right == NULL ){   //左节点直接指向其父节点
                return node->left;
            }
            else{
                TreeNode* cur = node->right;    
                while(cur->left != NULL ){
                    cur = cur->left;
                }
                cur->left = node->left;     //将右边提上去
                TreeNode* tmp = node;
                node = node->right;
                delete tmp;
                return node;
            }
        }
        // 单层递归逻辑
        if( node->val < val ) node->right = deleteT( node->right,val);
        if( node->val > val ) node->left = deleteT( node->left,val);
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return deleteT( root,key);

    }
};