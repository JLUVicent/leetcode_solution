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

    // // 普通二叉树解法 后序遍历 时间复杂度：O(n)
    // // 1.确定递归函数的参数以及返回值
    // int getNum( TreeNode* node){
    //     // 2.确定终止条件
    //     if ( node == NULL ) return 0;
    //     // 3.确定单层递归逻辑
    //     int leftNum = getNum( node->left ); //左
    //     int rightNum = getNum( node->right );//右
    //     int result = rightNum+leftNum+1;    //中
    //     return result;

    // }

    // 完全二叉树的解法 结合满二叉树的思路
    // 1.确定递归函数的参数以及返回值
    int getNum( TreeNode* node){
        // 2.确定终止条件
        if ( node == NULL ) return 0;
        // 定义左右子树
        TreeNode* left = node->left;    //这两个定义要放在终止条件之后，注意细节***********
        TreeNode* right = node->right;  //而且必须加这两个定义，第一次的时候就是没加这两个定义，直接在while那里用node->left其实已经变化了
        // 还有一个终止条件，找到满二叉树的条件
        int leftDepth = 0 ;//左子树的深度 // 这里初始为0是有目的的，为了下面求指数方便
        int rightDepth = 0 ;//右子数的深度
        while ( left ){   //计算左子树深度
            left = left->left;
            leftDepth++;
        }
        while ( right ){  //计算右子树深度
            right = right->right;
            rightDepth++;
        }
        if (rightDepth == leftDepth ){
            return (2<<leftDepth) - 1; // 注意(2<<1) 相当于2^2，所以leftDepth初始为0
        }
        // 确定单层递归逻辑
        int leftNum = getNum( node->left);
        int rightNum = getNum( node->right );
        return leftNum+rightNum+1;

    }

    int countNodes(TreeNode* root) {
        return getNum( root );
    }
};